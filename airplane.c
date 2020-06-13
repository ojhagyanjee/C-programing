#include<stdio.h>
void main()
{
	int l;
	printf("Enter size");
	scanf("%d",&l);
	pattern(l);
	
}

pattern(int x)
{
	int i,n;
	n=2*x-1;
	for(i=0;i<n;i++)
	{
		if(i<=x/2)
		{
			space(i);
			star(i);
		}
		else{
			space(x-i+1);
			star(x-i+1);
		}
		printf("\n");
	}
}

space(int n)
{int i;
	for(i=0;i<n;i++)
	{
		printf(" ");
	}
}

star(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("*");
	}
	
}
	
