#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
	int data;
	struct node *ptr;
}stack;
stack *top1=NULL,*top2,*temp;

void createStack();
void printStack();
bool isEmpty();
bool isFull(int);
int push(int,int);
int pop(int);
int peek();
int destroy();

int main()
{
	int count=0;
	bool control;
	
	printf("Is stack empty? ");
	control=isEmpty();
	printf("%s\n", control? "true" : "false");

	printf("Is stack full? ");
	control=isFull(count);
	printf("%s\n\n", control? "true" : "false");
	
	count=push(5,count);
	count=push(10,count);
	count=push(15,count);
	printStack();
	printf("This is the toppest value in the stack: %d\n", peek());
	
	count=pop(count);
	count=pop(count);
 	printStack();
	printf("This is the toppest value in the stack: %d\n", peek());
	
	printf("\n-----DESTROYING THE STACK-----\n");
	count=destroy();
 	printStack();
	
	return 0;
}
void createStack()
{
	top1=(stack *)malloc(sizeof(stack));
	top1->ptr=NULL;
	top1->data=NULL;
}
void printStack()
{
	top2=top1;

	if(top2==NULL)
	{
		printf("Stack is empty.\n");
		return 0;
	}
	while(top2!=NULL)
	{
		printf("%d\t", top2->data);
		top2=top2->ptr;
	}
	printf("\n");
}
bool isEmpty()
{
	if(top1==NULL)
		return true;
	else
		return false;
}
bool isFull(int counter)
{
	if(counter==10)
	{
		printf("Stack is full.\n");
		return true;
	}
	else
		return false;
}
int push(int newData,int counter)
{
	if(top1!=NULL)
	{
		temp=(stack *)malloc(sizeof(stack));
		temp->ptr=top1;
		temp->data=newData;
		top1=temp;
		printf("%d added in the stack.\n", newData);
	}
	else
	{
		createStack();
		push(newData,counter);
	}
	counter++;
	return counter;
}
int pop(int counter)
{
	int value;
	top2=top1;
	if(top1==NULL)
	{
		printf("Stack is empty!\n");
		return 0;
	}
	else
	{
		top2=top2->ptr;
		value=top1->data;
		free(top1);
		top1=top2;
		counter--;
		printf("%d removed from the stack.\n", value);
		return counter;
	}
}
int peek()
{
	return top1->data;
}
int destroy()
{
	top2=top1;
	while(top1!=NULL)
	{
		top2=top1->ptr;
		free(top1);
		top1=top2;
		top1=top1->ptr;
	}
	free(top2);
	top1=NULL;
	printf("Destroyed the stack!\n");
	return 0;
}


