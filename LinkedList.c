#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void create(void);
void print(void);
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL,*ptr,*temp;
int main()
{
	int y;
	
	printf("Enter your choice\n");
	while(1)
	{
		printf("1 for create\n");
		printf("2 for display\n");
		printf("3 for inserting at BEGNING\n");
		printf("4 for inserting at END\n");
		printf("5 for deleting FIRST NODE\n");
		printf("6 for deleting LAST NODE\n");
		printf("7 for exit\n");
		scanf("%d",&y);
		switch(y)
		{
			case 1: create();break;
			case 2: print();break;
			case 3: insertAtBeg();break;
			case 4: insertAtEnd();break;
			case 5: deleteFirst();break;
			case 6: deleteLast();break;
			case 7:exit(1);break;
			default : printf("Enter correct choice\n");
		}
	}
return 0;
}

void create()
{
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}

void print()
{
	//struct node *temp;
	if(head==NULL) printf("Linked List is Empty\n");
	else
	{
	ptr=head;
	while(ptr)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
    }
}
insertAtBeg()
{
	int z;
	printf("Enter Number\n");
	scanf("%d",&z);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=z;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		ptr=head;
		temp->next=ptr;
		head=temp;
		
	}
}
insertAtEnd()
{
	int a;
	printf("Enter the Number\n");
	scanf("%d",&a);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=a;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
deleteFirst()
{
	if(head==NULL)
	{
			printf("Linked List is empty\n");
	}
else{

	ptr=head;
	if(ptr->next==NULL)
	{
	  head=NULL;
	  printf("There was only one Node which has been deleted\n");
    }
    else
    {
    	head=ptr->next;
	}
    }
}
deleteLast()
{
	if(head==NULL) printf("Linked List is empty\n");
	else
	{
		ptr=head;
		if(ptr->next==NULL)
		{
			head=NULL;
			printf("There was only one Node which has been deleted\n");
		}
		else
		{
			while(ptr->next->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=NULL;
		}
	}
}

