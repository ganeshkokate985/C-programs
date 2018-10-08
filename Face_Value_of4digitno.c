#include<stdio.h>

int main()

{
int no,face,i,x;
x=1000;
printf("enter  the 4 digit  no");
scanf("%d",&no);
	if(no>=1000&&no<=9999)
	{
	for(i=1;i<=4;i++)
	{
		face=no/x;
		printf(" %d\t",face);
		printf(" %d\t",(face*x));
		no%=x;
		x=x/10;
	}
	}
	else
		printf("no is not four digit");
}
