#include<stdio.h>

void main()
{
	int i,a[5];
	
	printf("Enter elements\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	sort(a);
	printf("After Sorting\n");
	for(i=0;i<5;i++)
	printf("%d",a[i]);
}

sort(int a[])
{
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
}
