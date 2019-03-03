#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node
{
	int data;
	link *next;
};
int main()
{
	int i,n=9,m=5;
	link t=malloc(sizeof*t);

	t->data=1;
	t->next=t;
	for(i=2; i<=N; i++)
	{
		x=(x->next=malloc(sizeof*x))
		x->data=i;
		x->next=t;
	}
	while(x!=x->next)
	{
		for(i=1; i<m; i++)
		{
			x=x->next;
		}
		x->next=x->next->next;
		N--;
	}
 	printf("%d\n", x->data);
	
	return 0;
}
