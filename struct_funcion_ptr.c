#include<stdio.h>

	typedef int (*operation)(int a, int b);
	
	typedef struct _str
	{

		int result;
		char *p;
	//	operation opt;

	}STR;



	int add(int x,int y)
	{
		return x+y;
	}
	int multi(int x,int y)
	{
		return x*y;

	}

int main()
{
	
	obj.opt=add;
	obj.result=obj.opt(5,10);
	printf("the result is %d\n",obj.result);
	obj.opt=multi;
	obj.result=obj.opt(5,10);
	printf("the result is %d\n",obj.result);
	



	return 0;

}
