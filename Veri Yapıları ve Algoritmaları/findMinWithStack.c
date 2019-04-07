#include <stdio.h>

int main()
{
	int *stack1,*minStack;
	int *array;
	int size,i,top1=0,top2=0;
	
	printf("Enter size of array.");
	scanf("%d", &size);
	
	array=(int *)malloc(sizeof(int)*size);
	stack1=(int *)malloc(sizeof(int)*size);
	minStack=(int *)malloc(sizeof(int)*size);
	
	for(i=0; i<size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &array[i]);
	}
	top1=push(stack1,array[0],top1,size);
	top2=push(minStack,array[0],top2,size);
	for(i=1; i<size; i++)
	{
		if(array[i]<minStack[top2])
		{
			top2=push(minStack,array[i],top2,size);
		}
		top1=push(stack1,array[i],top1,size);
	}
	
	printf("The min value is: ");
	top2=pop(minStack,top2);
	
	return 0;
}

int push(int *stack, int data,int top,int size)
{
	if(top!=size)
	{
		top++;
		stack[top]=data;
		return top;
	}
	else
	{
		printf("The stack is full.\n");
		return size;
	}
}
int pop(int *stack, int top)
{
	int data;
	if(top!=0)
	{
		data=stack[top];
		top--;
		printf("%d\n", data);
		return top;
	}
	else
	{
		printf("The stack is empty.\n");
		return 0;
	}
}
