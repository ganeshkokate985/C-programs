#include<stdio.h>

void swap(int *a,int *b);

int main()
{
	int n1,n2,sum,mul;
	printf("enter the no 1\n");
	scanf("%d",&n1);
	printf("enter the no2 \n");
	scanf("%d",&n2);
printf("before swap=");
printf("n1 = %d n2 = % d\n",n1,n2);
printf("after swap=");
swap(&n1,&n2);
printf("n1 = %d n2 = % d\n",n1,n2);
	
}

void swap(int *a,int *b)
{
int temp=0;	
temp=*a;
*a=*b;
*b=temp;
return;
}
