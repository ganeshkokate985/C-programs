#include<stdio.h>

void cal(int a,int b, int *p1 ,int *p2);

int main()
{
	int n1,n2,sum,mul;
	printf("enter the no 1\n");
	scanf("%d",&n1);
	printf("enter the no2 \n");
	scanf("%d",&n2);
cal(n1,n2,&sum,&mul);
printf("sum is %d \n multiplication is % d",sum,mul);
	
}

void cal(int a,int b,int  *p1,int *p2)
{
*p1=a+b;
*p2=a*b;

}
