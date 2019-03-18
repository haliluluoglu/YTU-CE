#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

struct queue
{
	int count;
	node *front;
	node *rear;
};
typedef struct queue queue;

int main()
{
	queue *head;
	
	head->count=0;
	head->front=NULL;
	head->rear=NULL;
	
	return 0;
}
bool isEmpty(queue *head)
{
	return (head->front==NULL);
}
