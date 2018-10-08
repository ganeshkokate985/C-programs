#include<stdio.h>
#define SIZE 6
int z;
void printarry(int *p,int size);
int  uniqarry(int *p,int size);

int main()
{

	int i,a[SIZE],x,y;
	y=SIZE;
	printf("enter the %d arry element\n ",y);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);

	}
	x=uniqarry(a, SIZE);
	printf("no of duplicate no is%d",x);
	printarry(a,x);



	return 0;

}

int  uniqarry(int *p,int size)
{

	int i,j,k,z=size;
	for(i=0;i<z;i++)
	{
	//	printf("---\n");
		for(j=i+1;j<z;j++)
		{

			if(*(p+i)== *(p+j))
			{
				
				for(k=j;k<z;k++)
				{
					p[k]=p[k+1];
				}	
				j--;
				z--;	
			}	
			 		
		}
	}
	return z;
}

void printarry(int *p,int size)
{
	int i;
	printf(" array is");

	for(i=0;i<size;i++)
	{
		printf("%d ",*(p+i));
	}
	return;
}

