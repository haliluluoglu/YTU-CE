#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct stack
{
	int array[MAX];
	int top;
}node;

int isEmpty(node *);
int isFull(node *);
int push(node *,int);
int pop(node *,int *);
int peek(node *,int *);
int checkSymbol(char);
int calculation(char *,node *,node *);
int compute(int,int,int);
char *charToString(char);
void printStacks(node *,node *);
void leftBrackets(node *,node *);
void rightBrackets(node *,node *);
void multi(node *,node *);
void divide(node *,node *);
void plus(node *,node *);
void minus(node *,node *);
void last(node *, node *);

int main()
{
    char string[MAX];
    node numberStack;
	node charStack;
	numberStack.top=0;
	charStack.top=0;
	
	printf("\nEnter a expression, please(use numbers,brackets(),+,-,*,/): ");
 	fgets(string, 256, stdin);
 	printStacks(&numberStack,&charStack);
    printf("\nThe final result is: %d\n", calculation(string, &numberStack, &charStack));
    
    return 0;
}
void printStacks(node *numberStack,node *charStack)
{
	int numberStackIndex=numberStack->top;
    int charStackIndex=charStack->top;
	int i,j;

	printf("\n-----This is the number stack-----\n");
    for (i = 0; i < numberStackIndex; i++)
	{
		printf("%d\t", numberStack->array[i]);
    }
    
	printf("\n-----This is the stack of the symbols-----\n");
    for (j = 0; j < charStackIndex; j++)
	{
		printf("%c\t", charStack->array[j]);
    }
    printf("\n\n");
}
int isEmpty(node *stack)
{
    return (stack->top==0);
}
int isFull(node *stack)
{
    return (stack->top==MAX);
}
int push(node *stack,int data)
{
	int temp=stack->top++;
    if (isFull(stack))
	{
		printf("\n(ERROR)Stack ýs full..\n");
		return -1;
    }
    else
	{
		stack->array[temp]=data;
		return 0;
    }
}
int pop(node *stack,int *data)
{
    if (isEmpty(stack))
	{
		printf("\n(ERROR)Stack is empty.\n");
		return -2;
    }
    else
	{
		*data=stack->array[--stack->top];
		return 0;
    }
}
int peek(node *stack,int *data)
{
	int temp=stack->top-1;
    if(isEmpty(stack))
	{
		return 1;
    }
    else
	{
		*data=stack->array[temp];
		return 0;
    }
}
int calculation(char *string,node *numberStack,node *charStack)
{
    int result;
    char temp[MAX] = "";
    
    void (*symbolFunctions[7])() = {last,leftBrackets,rightBrackets,plus,minus,multi,divide};
				    
    while(*string!=NULL)
	{
		if(isdigit(*string))
		{
		    strcat(temp, charToString(*string));
		}
		else if(*string != ' ')
		{
		    if(atoi(temp))
			{
				push(numberStack,atoi(temp));
				printStacks(numberStack,charStack);
		    }
		    strcpy(temp, "");
		    symbolFunctions[checkSymbol(*string)](numberStack,charStack);
		}
		string++;

    }
    pop(numberStack,&result);
    printStacks(numberStack,charStack);
    
    return result;
}
char *charToString(char temp)
{
    char *string=malloc(sizeof(char)*2);
    string[0]=temp;
    string[1]=NULL;
    
    return string;
}
int checkSymbol(char symbol)
{
	if(symbol=='\n')
		return 0;
	else if(symbol=='(')
		return 1;
	else if(symbol==')')
		return 2;
	else if(symbol=='+')
		return 3;
	else if(symbol=='-')
		return 4;
	else if(symbol=='*')
		return 5;
	else if(symbol=='/')
		return 6;
	else
	{
		printf("(\nERROR)Invalid character.\n");
		return -4;
	}
}

void leftBrackets(node *numberStack, node *charStack)
{
    push(charStack, '(');
	printStacks(numberStack,charStack);
}
void rightBrackets(node *numberStack, node *charStack)
{
    int symbol,number1,number2;
    
    pop(charStack,&symbol);
    printStacks(numberStack,charStack);
    
    while(symbol != '(')
	{
		pop(numberStack,&number2);
		printStacks(numberStack,charStack);
		pop(numberStack,&number1);
		printStacks(numberStack,charStack);
		push(numberStack,compute(symbol,number1,number2));
		printStacks(numberStack,charStack);
		pop(charStack,&symbol);
		printStacks(numberStack,charStack);
    }
}
void multi(node *numberStack, node *charStack)
{
    int symbol, number1, number2;
    if (peek(charStack, &symbol))
	{
		push(charStack, '*');
		printStacks(numberStack,charStack);
    }
    else
	{
		if((symbol=='(')||(symbol=='+')||(symbol=='-'))
		{
			push(charStack, '*');
			printStacks(numberStack,charStack);
		}
		else if((symbol=='*')||(symbol=='/'))
		{
			while(!peek(charStack, &symbol) && symbol != '(' && symbol != '+' && symbol != '-')
			{
			pop(charStack, &symbol);
			printStacks(numberStack,charStack);
			pop(numberStack, &number2);
			printStacks(numberStack,charStack);
			pop(numberStack, &number1);
			printStacks(numberStack,charStack);
			push(numberStack, compute(symbol, number1, number2));
			printStacks(numberStack,charStack);
		    }
		    push(charStack, '*');
		    printStacks(numberStack,charStack);
		}
		else
		{
			printf("\n---ERROR---\n");
		}
	}
}
void divide(node *numberStack, node *charStack)
{
    int symbol, number1, number2;
    if (peek(charStack, &symbol))
	{
		push(charStack, '/');
		printStacks(numberStack,charStack);
    }
    else
	{
		if((symbol=='(')||(symbol=='+')||(symbol=='-'))
		{
			push(charStack, '/');
			printStacks(numberStack,charStack);
		}
		else if((symbol=='*')||(symbol=='/'))
		{
	   		while(!peek(charStack, &symbol) && symbol != '(' && symbol != '+' && symbol != '-')
		 	{
				pop(charStack, &symbol);
				printStacks(numberStack,charStack);
				pop(numberStack, &number2);
				printStacks(numberStack,charStack);
				pop(numberStack, &number1);
				printStacks(numberStack,charStack);
				push(numberStack, compute(symbol, number1, number2));
				printStacks(numberStack,charStack);
			}
		    push(charStack, '/');
		    printStacks(numberStack,charStack);
		}
		else
		{
			printf("\n---ERROR---\n");
		}
	}
}
void plus(node *numberStack, node *charStack)
{
	int symbol, number1, number2;
    if (peek(charStack, &symbol))
	{
		push(charStack, '+');
		printStacks(numberStack,charStack);
    }
    else
	{
		if(symbol=='(')
		{
			push(charStack, '+');
			printStacks(numberStack,charStack);
		}
		else if((symbol=='*')||(symbol=='/')||(symbol=='+')||(symbol=='-'))
		{
			while(!peek(charStack,&symbol) && (symbol != '('))
			{
				pop(charStack,&symbol);
				printStacks(numberStack,charStack);
				pop(numberStack,&number2);
				printStacks(numberStack,charStack);
				pop(numberStack,&number1);
				printStacks(numberStack,charStack);
				push(numberStack,compute(symbol, number1, number2));
				printStacks(numberStack,charStack);
		    }
		    push(charStack,'+');
		}
		else
		{
   			printf("\n---ERROR---\n");
		}
    }
}

void minus(node *numberStack, node *charStack)
{
    int symbol,number1,number2;
    if (peek(charStack,&symbol))
	{
		push(charStack, '-');
		printStacks(numberStack,charStack);
    }
    else
	{
		if(symbol=='(')
		{
			push(charStack, '-');
			printStacks(numberStack,charStack);
		}
  		else if((symbol=='*')||(symbol=='/')||(symbol=='+')||(symbol=='-'))
  		{
	  		while(!peek(charStack, &symbol) && symbol != '(')
			{
				pop(charStack, &symbol);
				printStacks(numberStack,charStack);
				pop(numberStack, &number2);
				printStacks(numberStack,charStack);
				pop(numberStack, &number1);
				printStacks(numberStack,charStack);
				push(numberStack, compute(symbol, number1, number2));
				printStacks(numberStack,charStack);
		    }
		    push(charStack, '-');
		    printStacks(numberStack,charStack);
		}
		else
		{
			printf("\n---ERROR---\n");
		}
	}
}

int compute(int symbol, int number1, int number2)
{
	if(symbol=='+')
		return number1+number2;
	else if(symbol=='-')
		return number1-number2;
	else if(symbol=='*')
		return number1*number2;
	else if(symbol=='/')
		return number1/number2;
	else
	{
		printf("\n---ERROR---\n");
		return -5;
	}
}
void last(node *numberStack, node *charStack)
{
    int symbol, number1, number2;
    while(!peek(charStack, &symbol) && symbol != '(')
	{
		pop(charStack, &symbol);
		printStacks(numberStack,charStack);
		pop(numberStack, &number2);
		printStacks(numberStack,charStack);
		pop(numberStack, &number1);
		printStacks(numberStack,charStack);
		push(numberStack, compute(symbol, number1, number2));
		printStacks(numberStack,charStack);
    }
}
