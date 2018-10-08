#include<stdio.h>
int fact(int no);

int main()
{
int no,x;
printf("enter the no ");
scanf("%d",&no);

x=fact(no);
printf("factorial of no is %d",x);
	return 0;
}



int fact(n)
{	

	int ans;
	if(n==1)
		return 1;

	else
	{
		ans=n*fact(n-1);
		printf("%d\n",ans);
	return ans;
	}


}
