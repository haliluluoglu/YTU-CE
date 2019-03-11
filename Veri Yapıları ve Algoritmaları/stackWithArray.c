#include <stdio.h>
#include <stdbool.h>

#define MAX 10

bool isEmpty(int);
bool isFull(int);
int peek(int *,int);

int main()
{
	int stack[MAX];
	int top=0;
	bool control;

	printf("Is stack empty? ");
	control=isEmpty(top);
	printf("%s\n", control? "true" : "false");
	
	printf("Is stack full? ");
	control=isFull(top);
	printf("%s\n", control? "true" : "false");
	
	top=push(stack,top,10);
	top=push(stack,top,20);
	top=push(stack,top,30);
	top=push(stack,top,40);
	top=push(stack,top,50);
	printStack(stack,top);

	printf("\n");
	
	top=pop(stack,top);
	printStack(stack,top);
	top=pop(stack,top);
	printStack(stack,top);

	return 0;
}
void printStack(int *stack,int top)
{
	while(top!=0)
	{
		printf("%d\t", stack[top]);
		top--;
	}
}
bool isEmpty(int top)
{
	if(top==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull(int maxSize)
{
	if(maxSize==MAX)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop(int *stack,int top)
{
	int data;
	if(!isEmpty(top))
	{
		data=stack[top];
		top--;
		printf("\nThis is the pop value: %d\n", data);
		return top;
	}
	else
	{
		printf("Empty stack.\n");
		return 0;
	}
}
int push(int *stack,int top,int data)
{
	if(!isFull(top))
	{
		top++;
		stack[top]=data;
		return top;
	}
	else
	{
		printf("Stack is full.\n");
		return 0;
	}
}
int peek(int *stack,int top)
{
	if(!isEmpty(top))
	{
		return stack[top];
	}
}

