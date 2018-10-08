#include<stdio.h>

void printarr(int *p, int size);

int main()
{
 
int i,size;

printf("enter the no of elements");
scanf("%d",&size);
 int arr[50];
printf("enter the element");
	for(i=1;i<=size;i++)
	{
	scanf("%d",&arr[i]);		
	

	}
printarr( arr,size);

}

 void printarr(int* p, int s)
	{
		int i;
	
		
		for(i=1;i<=s;i++)
		{
		
		printf("%d",*(p+i));	
		
		}

		return ;
	}
