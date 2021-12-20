#include<stdio.h>
#include<stdlib.h>

void aFunction(int *);

int main()
{
	int a[3][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	int b = 20;
	int *p;

	aFunction(&a);
	aFunction(&a[0]);
	aFunction(&a[1]);
	aFunction(&a[0][1]);
	//aFunction(&b);
	return 0;
} 
void aFunction(int *middle)
{ 
	printf("The Answer of p1 is:%.2d   %p   %p\n",*middle,middle,&middle);
}