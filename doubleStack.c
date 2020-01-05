#include<stdio.h>
int stack[100],top1=-1,top2,i,z1,z2,x,n,j;
void push1();
void pop1();
void display1();
void push2();
void pop2();
void display2();
void main()
{
	
	printf("Enter size of stack\n\n");
	scanf("%d",&n);
	
	top2=n;
	
	printf("Stack operations are push,pop and display\n\n");
	printf("choose the appropriate operations\n");
	printf("---------------------\n\n");
	printf("\t\t 1. push1()\n\t\t 2. pop1()\n\t\t 3. display1()\n\t\t 4. push2()\n\t\t 5. pop2()\n\t\t 6. display2() 7. exit()\n");

do
 {
	
	printf("\nenter your choice\n");
	scanf("%d",&x);
	
	switch(x)
	{
	  case 1: { push1();break;}
	  case 2: {pop1();break;}
	  case 3: {display1();break;}
	  case 4: { push2();break;}
	  case 5: { pop2();break;}
	  case 6: { display2();break;}
	  case 7:{printf("Exit\n");}
	  default: printf("Enter correct choice\n");
	}
 }
 while(x!=7);
}

void push1()
{
	if(top1==top2-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Enter element to be pushed\n");
		scanf("%d",&z1);
		stack[++top1]=z1;
	}
}

void push2()
{
	if(top1==top2-1)
	printf("Stack is full\n");
	
	else
	{
		printf("Enter element to be pushed\n");
		scanf("%d",&z2);
		stack[--top2]=z2;
	}
}

void pop1()
{
	if(top1==-1)
	printf("Stack1 is empty");
	else
	top1-=1;
}

void pop2()
{
	if(top2==n)
	printf("Stack2 is empty\n");
	
	else
	top2+=1;
}
void display1()
{
	if(top1==-1)
	{
		printf("Stack1 is empty\n");
	}
	else
	for(i=top1;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
void display2()
{
	if(top2==n)
	printf("Stack2 is empty\n");
	
	else
	for(j=n-1;j>=top2;j--)
	printf("%d\n",stack[j]);
}
