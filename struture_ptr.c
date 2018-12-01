#include<stdio.h>


	typedef struct _str
	{

		int result;
		char *p;

	}STR;

int main()
{

	STR *obj;//by using only this pointer we cant access the members of structure
   	STR s;//for that we used object of same type 
	obj=&s;//and assign it to pointer of same type

	obj->result=12;
	printf("the result is %d\n",obj->result);
	obj->p="Ganesh";
	printf("the result is %s\n",obj->p);
	return 0;
}
