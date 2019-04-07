#include <stdio.h>

#define MAX 10
typedef struct node1
{
	int data;
	struct node *next;
}node;

typedef struct node2
{
	int count;
	node *front;
	node *rear;
}queue;

void initialization(queue *q)
{
	q->count=0;
 	q->front=NULL;
 	q->rear=NULL;
}

int isEmpty(queue *q)
{
	return (q->front==NULL); //(q->rear=NULL)
}

void enqueue(queue *q, int value)
{
	if(q->count!=MAX)
	{
		node *temp;
		temp=(node *)malloc(sizeof(node));
		temp->data=value;
		temp->next=NULL;
		if(!isEmpty(q))
		{
			q->rear->next=temp;
			q->rear=temp;
		}
		else
		{
			q->rear=temp;
			q->front=temp;
		}
		q->count+=1;
	}
	else
	{
		printf("Queue is full.\n");
	}
}

int dequeue(queue *q)
{
	if(!isEmpty(q))
	{
		node *temp;
		int value=q->front->data;
		temp=q->front;
		q->front=q->front->next;
		q->count--;
		free(temp);
		return value;
	}
	else
	{
		printf("\nQueue is empty.\n");
	}
}

void printQueue(queue *q)
{
	node *temp=q->front;
	if(!isEmpty(q))
	{
  		while(temp->next!=NULL)
		{
			printf("%d\t", temp->data);
			temp=temp->next;
		}
		printf("%d\t", temp->data);
		printf("\n");
	}
	else
	{
		printf("\nQueue is empty.\n");
	}
}

int main()
{
	queue *q;
	q=(queue *)malloc(sizeof(queue));
	
	printf("START\n");
	
 	initialization(q);
 	
  	enqueue(q,10);
   	printQueue(q);
   	
	enqueue(q,15);
 	printQueue(q);
 	
 	enqueue(q,20);
 	printQueue(q);
 	
 	printf("\nDequeue: %d\n", dequeue(q));
 	printQueue(q);
}
