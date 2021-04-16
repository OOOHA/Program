#include<stdio.h>
#include<stdlib.h>

void divide(void);

int main()
{
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("%d",i);
	}

    printf("\n");

	for(int j = 0 ; j < 5 ; ++j)
	{
		printf("%d",j);
	}
    printf("\n");
    divide();
	
	int a = 10;
	int *b;
	b = &a;
	printf("a = %d %p\n",a,&a);
	printf("b = %d %p\t%p\n",*b,b,&b);
	
	divide();

	int a1 = 1;
	int a2 = 2;
	int *b1;
	b1 = &a1;
	printf("a1 = %d\t\t%p\n",a1,&a1);
	printf("b = %d\t\t%p\t%p\n",*b1,b1,&b1);
	printf("a2 = %d\t\t%p\n",a2,&a2);
	b1 = &a2;
	printf("b-2 = %d\t\t%p\t%p\n",*b1,b1,&b1);
	printf("a1-2 = %d\t%p\n",a1,&a1);

	divide();
	/*
	change a and b 
	*/

	int anumber = 100;
	int bnumber = 50;
	int *anser3;

	anser3 = &anumber;
	printf("%d\n",*anser3);
	anser3 = &bnumber;
	printf("%d\n",*anser3);

	divide();

	




	return 0;
 } 

 void divide(void)
 {
	printf("===============================================================\n");
 }