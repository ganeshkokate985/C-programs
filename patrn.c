#include <stdio.h>
int main(void)
{
	int i, j, k, row;
	//printf("\n enter no of rows you want :: ");
	//scanf("%d", &row);

	for(i=1; i<=5; i++)
	{
		 // print space (#)
		for(j=5; j>=i; j--)
		{
			printf("   ");
		}
		//print 1st part number after space
		for(k=i; k>=1; k--)
		{
			printf("%3d", k);
		}
		//print 2ed part of number  after 1 st part
		for(k=1; k<=i; k++)
		{
			printf("%3d", k);
    	        }

		printf("\n");
	}

 
for(i=5; i>=1; i--)
	{
		 // print space (#)
		for(j=5; j>=i; j--)
		{
			printf("   ");
		}
		//print 1st part number after space
		for(k=i; k>=1; k--)
		{
			printf("%3d", k);
		}
		//print 2ed part of number  after 1 st part
		for(k=1; k<=i; k++)
		{
			printf("%3d", k);
    	        }

		printf("\n");
	}

}
 
