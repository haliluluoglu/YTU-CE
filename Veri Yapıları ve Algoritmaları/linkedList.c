#include <stdio.h>
#include <stdlib.h>
Node *insertTop(int,Node *)

typedef struct link{
	int data;
	struct link *next;
}Node;

int main(void)
{
	//CREATING LINKED LIST...
}
//Inserting element at the top of linked list.
Node *insertTop(int num, Node *head)
{
	Node *newNode;
	newNode=(Node *)malloc(sizeof(Node));
	newNode->data=num;
	newNode->next=head;
	head=newNode;
	
	return head;
}
//Inserting element between two elements of linked list.
Node *insertAfter(int num, int prevNum,Node *head)
{
	Node *currentNode=head;
	Node *newNode;
	while(currentNode->data!=prevNum)
	{
		currentNode=currentNode->next;
	}
	newNode=(Node *)malloc(sizeof(Node));
	newNode->data=num;
	newNode->next=currentNode->next;

	return head;
}
//Deleting elements of linked list
Node *deleteValue(int num, Node *head)
{
	Node *currentNode=head;
	Node *prev;
	while(currentNode!=NULL)
	{
		if(currentNode->data==num)
		{
			if(currentNode==head)
			{
				head=currentNode->next;
			}
			else
			{
				prev->next=currentNode->next;
			}
		}
		prev=currentNode;
		currentNode=currentNode->next;
	}
	return head;
}
