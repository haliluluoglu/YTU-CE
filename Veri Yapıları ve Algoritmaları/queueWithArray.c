#include <stdio.h>
#define MAX 10

int queue[MAX];
int front=-1,rear=-1;
int size=-1;

int isEmpty()
{
	return (size<0);
}
int isFull()
{
	return (size==MAX);
}
void enqueue(int value)
{
	if(isFull)
	{
		if(isEmpty())
		{
			queue[0]=value;
			rear=0; front=0;
			size=1;
		}
		else if(rear==MAX-1)
		{
			queue[0]=value;
			rear=0;
			size++;
		}
		else
		{
			rear++;
			queue[rear]=value;
			size++;
		}
	}
}
int dequeue()
{
	int value;
	if(isEmpty)
	{
		value=queue[front];
		front++;
		size--;
		if(front==MAX)
		{
			front=0;
		}
		return value;
	}
	else
	{
		printf("\nQueue is empty.\n");
	}
}
void printQueue()
{
	int i;
	for(i=front; i<=size; i++)
	{
		printf("%d\t", queue[i]);
	}
	printf("\n");
}
int main()
{
	enqueue(10);
 	printQueue();
 	
 	enqueue(15);
	enqueue(20);
	printQueue();
	
	printf("\nDequeue: %d\n", dequeue());
	printQueue();
	
	return 0;
}
