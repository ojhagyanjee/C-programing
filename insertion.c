#include<stdio.h>
#include<math.h>

void main()
{
int i,a[5];
printf("Enter Elements\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("Before Sorting\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
sort(a);
printf("\nAfter Sorting\n");
for(i=0;i<5;i++)
printf("%d",a[i]);
}

sort(int a[])
{
	int i,j,x;
	for(j=1;j<5;j++)
	{
		i=j-1;
		x=a[j];
		while(i>=0 && a[i]>x)
		{
			a[i+1]=a[i];
			i--;

		}
		a[i+1]=x;
	}
}

