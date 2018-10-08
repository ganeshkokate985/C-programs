#include<stdio.h>


int main()
{
int r,c,n,count;

printf("enter the r n c value");
//getchar();
scanf("%d ",&n);

printf("*\n");
printf("**\n");
printf("***\n");
printf("****\n");



for(r=1;r<=n;r++)
	{
	count=0;
	for(c=r; c<=n;c++)

		{
			count++;
			printf("%d ",count);
			//printf(" %2d",c);
			//printf("\n ");
			} 
 	   printf("\n");

	
	}

return 0;
}
 
