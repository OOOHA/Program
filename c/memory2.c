#include<stdio.h>
#include<stdlib.h>

void afun(int *);

int main()
{
	int a = 1;
	int b = 10;
	int c = 20;
	int *p;

	afun(&a);
	afun(&b);
	afun(&c);
	return 0;
} 
void afun(int *middle)
{
	int *p2;
	p2 = middle;
  
	printf("The Answer of p1 is:%.2d   %p   %p\n",*middle,middle,&middle);
	printf("The Answer of p2 is:%2d   %p   %p\n",*p2,p2,&p2);
}