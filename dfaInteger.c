# include<stdio.h>
# include<conio.h>
#include<stdio.h>
int main ()
{
char a[3][2]={1,2,1,2,2,2};
char b[100];
int i=0;
int state=0;
printf("Enter the number\n");
scanf("%s",b);
while(b[i]!=NULL)
{
    if(isdigit(b[i]))
        state= a[state][0];
    else
        state=a[state][1];
    i++;
}
if(state==1)
    printf("Accepted");
else
    printf("Rejected");
}
