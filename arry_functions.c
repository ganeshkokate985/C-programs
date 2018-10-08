#include<stdio.h>
#define SIZE 10
void rev(int *p,int size);

void printarry(int *p,int size);
 

int main()
{
	int i,arr[SIZE];
	 printf("enter the element");
	
	 for(i=0;i<SIZE;i++)
	{

		scanf("%d",&arr[i]);		
	}

	printarry(arr, SIZE);
	rev(arr,SIZE);
	printarry(arr, SIZE);
	
	return 0;
}

 
	


void rev(int *p,int size)
{
	int i,temp;
	for(i=0;i<=size;i++)
	{
		temp= *(p+i);
		*(p+i)=*(p+size);
		*(p+size)=temp;
		size--;
	}
}


void printarry(int *p,int size)
{
	int i;
printf(" array is");

	for(i=0;i<size;i++)
	{
		printf("%d",*(p+i));
	}
	return;
}

