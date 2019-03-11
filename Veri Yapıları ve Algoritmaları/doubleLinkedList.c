#include <stdio.h>
#include <stdlib.h>
struct Double
{
	int data;
	struct Double *next;
	struct Double *previous;
};

void printList(struct Double *);
struct Double* addFront(struct Double *,int);
void addEnd(struct Double *,int);

int main()
{
	struct Double *head=NULL;
	
	head=addFront(head,5);
	printList(head);

	
	addEnd(head,10);
	printList(head);
	
 	addAfter(head,15);
 	printList(head);
	return 0;
}
void printList(struct Double *head)
{
	while(head!=NULL)
	{
		printf("%d\t", head->data);
		head=head->next;
	}
	printf("\n");
}

struct Double* addFront(struct Double *head,int newData)
{
	struct Double *newNode=(struct Double *)malloc(sizeof(struct Double));
	
	newNode->data=newData;
	newNode->next=head;
	newNode->previous=NULL;

	if(head!=NULL)
	{
		head->previous=newNode;
	}
	head=newNode;
	return head;
}

void addEnd(struct Double *head,int newData)
{
	struct Double *newNode=(struct Double *)malloc(sizeof(struct Double));
	struct Double *currentNode=head;
	
	newNode->data=newData;
	newNode->next=NULL;
	
	while(currentNode->next!=NULL)
	{
		currentNode=currentNode->next;
	}
	
	currentNode->next=newNode;
	newNode->previous=currentNode;
	
}
void addAfter(struct Double *prevNode,int newData)
{
	if(prevNode==NULL)
	{
		printf("The given node can not be EMPTY!Please give a valid node.\n");
		return;
	}
	struct Double *newNode=(struct Double *)malloc(sizeof(struct Double));
	newNode->data=newData;
	newNode->next=prevNode->next;
	prevNode->next=newNode;
	newNode->previous=prevNode;
	
	if(newNode->next!=NULL)
	{
		newNode->next->previous=newNode;
	}
}
