#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList{
	int data;
	struct linkedList *next;
}Node;

Node *insertTop(int,Node *);
void printList(Node *);
Node *insertAfter(int,int,Node *);
Node *deleteValue(int,Node *);
void reserveList(Node *);

int main()
{
	int i,number;
	Node *root=NULL;
	root=(Node *)malloc(sizeof(Node));

	printf("Enter a number for add to list, please: ");
	scanf("%d", &number);
	//Initizalition to list.
	root->data=number;
	root->next=NULL;
	printList(root);
	//Inserting some elements on the top.
	root=insertTop(10,root);
	printList(root);
	//Inserting some elements into the middle.
	root=insertAfter(15,10,root);
	printList(root);
	//Delete some elements in the linked list.
	root=deleteValue(15,root);
	printList(root);
	//Reversing the linked lis
	reverseList(root);
	
	return 0;
}
//Printing the linked list.
void printList(Node *root)
{
	while(root!=NULL)
	{
		printf("%d\t", root->data);
		root=root->next;
	}
	printf("\n");
}
//Making all elements in the list reversal.
void reverseList(Node *head)
{
	Node *temp;
	Node *currentNode=head;
	Node *prevNode=NULL;
	while(currentNode!=NULL)
	{
		temp=currentNode->next;
		currentNode->next=prevNode;
		prevNode=currentNode;
		currentNode=temp;
	}
	head=prevNode;
	printList(head);
}
//Inserting element at the top of linked list..
Node *insertTop(int num, Node *head)
{
	Node *newNode;
	newNode=(Node *)malloc(sizeof(Node));
	newNode->data=num;
	newNode->next=head;
	head=newNode;
}
//Inserting element between two elements of linked list.
Node *insertAfter(int num, int prevNum, Node *head)
{
	Node *currentNode=head,*newNode;
	newNode=(Node *)malloc(sizeof(Node));
	while(currentNode->data!=prevNum)
	{
		currentNode=currentNode->next;
	}
	newNode->data=num;
	newNode->next=currentNode->next;
	currentNode->next=newNode;
	return head;
}
//Deleting elements of linked list.
Node *deleteValue(int num,Node *head)
{
	Node *currentNode=head,*prevNode;
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
				prevNode->next=currentNode->next;
			}
		}
		prevNode=currentNode;
		currentNode=currentNode->next;
	}
	return head;
}
