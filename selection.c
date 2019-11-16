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
	int i,temp,min,j;
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
