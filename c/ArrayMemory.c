#include<stdio.h>
#include<stdlib.h>

void afun(int *);

int main()
{
	int a[3][3] ={
		{1,2,3},
		{4,5,6}
		};
	int b = 20;
	int *p;

	afun(&a);
	afun(&a[0]);
	afun(&a[1]);
	afun(&a[0][1]);
	//afun(&b);
	return 0;
} 
void afun(int *middle)
{ 
	printf("The Answer of p1 is:%.2d   %p   %p\n",*middle,middle,&middle);
}