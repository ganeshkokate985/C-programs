#include<stdio.h>
int fact(int no);
int main ()
{

	int no,n,r,x,k;
	printf("enter the no");
	scanf("%d",&no);



	for(n=1;n<=no;n++)
	
		{
				for(r=1;r<=no-n;r++)
				{
					printf(" # ");
				}
				

			for(k=r;k<=no;k++)
			{
			x=fact(k)/(fact(k) * fact(k-r));
			printf("%d ",x);
			}
			
			printf("\n");
		}
}

int fact(n)
	{
		int count=1,factt=1;
		while(count<=n)
		{
			factt=factt*count;
			count++;
			
		}

		return factt;
	}
