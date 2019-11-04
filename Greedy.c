

#include<stdio.h>

int main()
{

    int i,x,j,n;
    float w[10],p[10],a[10],temp1,temp2,pr;
    pr=0;

    printf("Enter total number of objects\n");
    scanf("%d",&n);

    printf("Enter space of bag\n");
    scanf("%d",&x);

    printf("Enter weight of objects\n");
    for(i=0;i<n;i++)
        scanf("%f",&w[i]);
    printf("Enter price of each object\n");
    for(i=0;i<n;i++)
        scanf("%f",&p[i]);
    for(i=0;i<n;i++)
    {

        a[i]=(p[i])/(w[i]);
    }
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {

            if(a[j]<a[j+1])
            {
                temp1=a[j]; temp2=w[j];
                a[j]=a[j+1]; w[j]=w[j+1];
                a[j+1]=temp1; w[j+1]=temp2;
            }
        }
    }
   /* for(i=0;i<n;i++)
       printf("%f\n",a[i]);

    for(i=0;i<n;i++)
          printf("%f\n",w[i]);*/

   for(i=0;i<n;i++)
    {

        if(w[i]<x)
        {

            x-=w[i];
            pr=pr+((a[i])*(w[i]));

        }
        else
            {
           
            pr=pr+((a[i])*x);
            //w[i]-=x;
            break;
            }
    }
  printf("%f",pr);

}

