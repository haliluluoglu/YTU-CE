#include <stdio.h>

typedef struct node
{
	int data;
	struct node *right;
	struct node *left;
}T;
T *createTree(int data)
{
	T *tree=(T *)malloc(sizeof(T));
	tree->data=data;
	tree->right=NULL;
	tree->left=NULL;
	return tree;
}
void visit(T *tree)
{
	printf("%d\t", tree->data);
}
void preTraverse(T *tree)
{
 	if(tree==NULL)
	{
		return -1;
	}
	else
	{
		visit(tree);
		preTraverse(tree->left);
		preTraverse(tree->right);
	}
}
void inTraverse(T *tree)
{
 	if(tree==NULL)
	{
		return -2;
	}
	else
	{
		inTraverse(tree->left);
		visit(tree);
		preTraverse(tree->right);
	}
}
void postTraverse(T *tree)
{
	if(tree==NULL)
	{
		return -3;
	}
	else
	{
		postTraverse(tree->left);
		postTraverse(tree->right);
		visit(tree);
	}
}
int isEqual(T *first,T *second)
{
	return (first&&second&&(first->data&&second->data)&&(first->left&&second->left)&&(first->right&&(second->right)));
	//return (!first==!second);
}
T *insert(T *node,int data)
{
	if(node==NULL)
	{
		return node=createTree(data);
	}
	if(data<node->data)
	{
		node->left=insert(node->left,data);
	}
	else if(data>node->data)
	{
		node->right=insert(node->right,data);
	}
	else
	{
		return node;
	}
}
T *minValueTree(T *node)
{
	T *current=node;
	while(current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}
T *deleteTree(T *root,int data)
{
	if(root==NULL)
	{
		return root;
	}
	if(data<root->data)
	{
		root->left=deleteTree(root->left,data);
	}
	else if(data>root->right)
	{
		root->right=deleteTree(root->right,data);
	}
	else
	{
		if(root->left==NULL)
		{
			T *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			T *temp=root->left;
			free(root);
			return temp;
		}
		T *temp=minValueTree(root->right);
		root->data=temp->data;
		root->right=deleteTree(root->right,temp->data);
	}
	return root;
}
void main()
{
	T *tree;
	int data,size,i;
	
	printf("How many node do you have in the tree? ");
	scanf("%d", &size);

	printf("Enter a root data, please: ");
	scanf("%d", &data);
	tree=createTree(data);

	
	for(i=1; i<size; i++)
	{
		printf("Enter the next data: ");
		scanf("%d", &data);
		insert(tree,data);
	}
	printf("\nPre-order Traversal.\n");
 	preTraverse(tree);
 	printf("\nPost-order Traversal.\n");
 	postTraverse(tree);
 	printf("\nIn-order Traversal.\n");
 	inTraverse(tree);
 	
 	tree=deleteTree(tree,40);
 	printf("\nDeleted from the tree\n");
 	inTraverse(tree);
}
