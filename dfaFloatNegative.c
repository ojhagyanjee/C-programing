#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int i,state;
	char a[5][4]={1,1,2,2,1,2,3,2,2,2,2,2,4,2,2,2,4,2,2,2,};
	char b[10];
	i=0;state=0;
	
	printf("Enter Number\n");
	scanf("%s",b);
	//gets(b);
	
	while(b[i]!=NULL)
	{
		if(isdigit(b[i]))
		{
			state=a[state][0];
		}
		else if(b[i]=='.')
		{
			state=a[state][2];
		}
		else if((b[i]=='+')||(b[i]=='-'))
		{
		    state=a[state][1];
	    }
	    else state=a[state][3];
		
		i++;
	}
	if((state==1)||(state==4))
	printf("Accepted\n");
	else
	printf("rejected\n");
}
