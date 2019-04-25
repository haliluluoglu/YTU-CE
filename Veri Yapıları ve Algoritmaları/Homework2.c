#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 64

typedef struct node
{
	int iD;
	char nameSurname[MAX];
	char friends[MAX];
	struct node *left,*right;
}user;

user *newUser(int iD, char *nameSurname, char *friends);
user *insertNewUser(user *aUser, int iD, char nameSurname, char *friends);
user *deleteUser(user *aUser,int iD);
user *findMin(user *aUser);
user *contains(user *aUser,int iD);
void friends(user *aUser,int iD);
int size(user *aUser);
void printNext(user *aUser,int iD);
void printGreater(user *aUser,int iD);
void printInOrder(user *aUser);
user *readFile(user *root);

int main(int argc,char argv[])
{
	FILE *f=fopen("Input.txt","r");
	user *root=NULL;
	int choise=0,id=0;
	
	if(f==NULL)
	{
		printf("File is empty.\n");
		return -1;
	}
	
	while(((choise>=0)&&(choise<=8)))
	{
		printf("\t~~~~~Halil Ibrahim Uluoglu~~~~~~~~~~~\n");
		printf("\t~~~~~Data Structers Homework2~~~~~~~~\n");
		printf("\t~~~~~Please, enter a valid number~~\n\n");

		printf("\t~~~~~~For insert data, press 1~~~~~~~\n");
		printf("\t~~~~~For delete user, press 2~~~~~~~~\n");
		printf("\t~~~~~For contains, press 3~~~~~~~~~~~\n");
		printf("\t~~~~~For friends, press 4~~~~~~~~~~~~\n");
		printf("\t~~~~~For size, press 5~~~~~~~~~~~~~~~\n");
		printf("\t~~~~~For print next, press 6~~~~~~~~~\n");
		printf("\t~~~~~For print greater, press 7~~~~~~\n");
		printf("\t~~~~~For print in order, press 8~~~~~\n");
		printf("\t~~~~~For exiting the program, press -1\n");
		scanf("%d", &choise);
        switch(choise)  {
        	case 0:
        		break;
            case 1:
					root = readFile(root);
                break;
            case 2:
            	printf("Enter id: ");
                scanf("%d",&id);
                deleteUser(root,id);
                break;
            case 3:
				printf("Enter id: ");
                scanf("%d",&id);
                contains(root,id);
                break;
            case 4:
				printf("Enter id: ");
                scanf("%d",&id);
                friends(root,id);
                break;
            case 5:
                printf("size: %d\n",size(root));
                break;
            case 6:
                printf("Enter id: ");;
                scanf("%d",&id);
                printNext(root,id);
                break;
            case 7:
				printf("Enter id: ");
                scanf("%d",&id);
                printGreater(root,id);
                break;
            case 8:
                printInOrder(root);
                printNext(root,id);
                break;
        }
    }
    return 0;
}
	
user *newUser(int iD, char *nameSurname, char *friends)
{
	user *temp=(user *)malloc(sizeof(user));
	
	temp->iD=iD;
	strcpy(temp->nameSurname,nameSurname);
	strcpy(temp->friends,friends);
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;
}
user *insertNewUser(user *aUser, int iD, char nameSurname, char *friends)
{
	if(aUser==NULL)
	{
		return newUser(iD, nameSurname, friends);
	}
	
	if(iD<aUser->iD)
	{
		aUser->left=insertNewUser(aUser->left,iD,nameSurname,friends);
	}
	else if(iD>aUser->iD)
	{
		aUser->right=insertNewUser(aUser->right,iD,nameSurname,friends);
	}
	else
	{
		printf("[ERROR]! Equal to node.\n");
	}

	return aUser;
}
user *deleteUser(user *aUser,int iD)
{
	if(aUser==NULL)
	{
		printf("[ERROR]! Node is empty.\n");
		return aUser;
	}
	else
	{
		if(iD<aUser->iD)
		{
			aUser->left=deleteUser(aUser->left,iD);
		}
		else if(iD>aUser->iD)
		{
			aUser->right=deleteUser(aUser->right,iD);
		}
		else
		{
			if(aUser->left==NULL)
			{
				user *temp=aUser->right;
				free(aUser);
				return temp;
			}
			else if(aUser->right==NULL)
			{
				user *temp=aUser->left;
				free(aUser);
				return temp;
			}
			user *temp=findMin(aUser->right);
			aUser->iD=temp->iD;
			strcpy(aUser->nameSurname,temp->nameSurname);
			strcpy(aUser->friends,temp->friends);
			aUser->right=deleteUser(aUser->right,temp->iD);
		}
	}
	return aUser;
}
user *findMin(user *aUser)
{
	user *temp=aUser;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp;
}
user *contains(user *aUser,int iD)
{
	if(aUser==NULL)
	{
		printf("[ERROR]! Node is empty.");
	}
	else
	{
		if(iD<aUser->iD)
		{
			return contains(aUser->left,iD);
		}
		else if(iD>aUser->iD)
		{
			return contains(aUser->right,iD);
		}
		else
		{
			return aUser;
		}
	}
}
void friends(user *aUser,int iD)
{
	user *temp=contains(aUser,iD);
	printf("Id: &d\t\n", temp->iD);
	printf("Name and Surname: %s\t\n", temp->nameSurname);
}
int size(user *aUser)
{
	if(aUser==NULL)
	{
		return 0;
	}
	else
	{
		return ((size(aUser->left))+(size(aUser->right))+1);
	}
}
void printNext(user *aUser,int iD)
{
	user *temp=contains(aUser,iD);
	printInOrder(temp);
}
void printGreater(user *aUser,int iD)
{
	if(aUser==NULL)
	{
		return NULL;
	}
	printGreater(aUser->left,iD);
	if(iD<aUser->iD)
	{
		printf("Id: %d\n", aUser->iD);
		printf("Name and Surname: %s\n", aUser->nameSurname);
	}
	printGreater(aUser->right,iD);
}

void printInOrder(user *aUser)
{
	if(aUser!=NULL)
	{
		printInOrder(aUser->left);
		printf("User id: %d\t name and surname: %s\t friends: %s\t", aUser->iD, aUser->nameSurname, aUser->friends);
		printInOrder(aUser->right);
	}
	else
	{
		printf("[ERROR]! Node is empty.\n");
	}
}

user *readFile(user *root)
{
    char fileName[MAX], input[MAX], *temp, nameSurname[MAX];
    char comma[2] = ",",dash[2] = "-";
    int friends[MAX], tmpID,i=0;
    FILE *f;
    
    printf("Enter file name\n");
    scanf("%s",fileName);
    
    
    f = fopen(fileName,"r");
    if(!f){
        printf("[Error] Can notopen!");
		return -1;
    }
    while(!feof(f)){
        i=0;
        if(fgets(input, MAX, f) != NULL)
		{
            temp = strtok(input,comma);
            if(temp != NULL)
			{
                tmpID = atoi(temp);
                temp = strtok(NULL, comma);
            }
            if(temp != NULL)
			{
                strcpy(nameSurname,temp);
                temp = strtok(NULL, comma);
            }
            temp = strtok(temp, dash);
            if(temp != NULL)
			{
                while(temp != NULL)
				{
                    if(i==MAX)
					{
						return -2;
                    }
                    friends[i] = atoi(temp);
                    i++;
                    temp = strtok(NULL, dash);
                }
            }
            root = insertNewUser(root,tmpID,nameSurname,friends);
        }
    }
    return root;
}

