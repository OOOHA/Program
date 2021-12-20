#include<stdio.h>
#include<stdlib.h>

//int a(int *x);

int main()
{
	int y = 1;
	
	printf("%d",tryFunction(y));
	return 0;
}

int tryFunction(int *x)
{
	//printf("%d",x);
	return x;
}