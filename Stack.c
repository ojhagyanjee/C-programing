#include<stdio.h>
int stack[100],top=-1,i,z,x,n;
void push();
void display();
void main()
{
	
	printf("Enter size of stack\n\n");
	scanf("%d",&n);
	printf("Stack operations are push,pop and display\n\n");
	printf("choose the appropriate operations\n");
	printf("---------------------\n\n");
	printf("\t\t 1. push()\n\t\t 2. pop()\n\t\t 3. display()\n\t\t 4. exit()\n");

do
 {
	
	printf("\nenter your choice\n");
	scanf("%d",&x);
	
	switch(x)
	{
	  case 1:{ push();break;}
	  case 2: {pop();break;}
	  case 3: {display();break;}
	  case 4:{printf("Exit\n");}
	  default: printf("Enter correct choice\n");
	}
 }
 while(x!=4);
}

void push()
{
	if(top==n-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Enter element\n");
		scanf("%d",&z);
		stack[++top]=z;
	}
}

pop()
{
	if(top==-1)
	printf("Stack is empty");
	else
	top-=1;
}

void display()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	for(i=top;i>=0;i--)
	{
		printf("\n%d\n",stack[i]);
	}
}
