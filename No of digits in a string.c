#include <stdio.h>

int main()
{
	int num,i,a[10],x;
	for(i=0;i<10;i++)
	a[i]=0;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);  
	
	while(num!=0)
	{
	    x=num%10;
	    num/=10;
	    
	    switch(x)
	    {
	        case 0: a[0]=a[0]+1;break;
	        case 1: a[1]=a[1]+1;break;
	        case 2: a[2]=a[2]+1;break;
	        case 3: a[3]=a[3]+1;break;
	        case 4: a[4]=a[4]+1;break;
	        case 5: a[5]=a[5]+1;break;
	        case 6: a[6]=a[6]+1;break;
	        case 7: a[7]=a[7]+1;break;
	        case 8: a[8]=a[8]+1;break;
	        case 9: a[9]=a[9]+1;break;
	    }
	}
	for(i=0;i<10;i++)
	{
	    printf("%d %d\n",i,a[i]);
	}
}

