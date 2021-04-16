#include<stdio.h>
#include<stdlib.h>

void *z(int *, int);

int main()
{	
	int a[3] = {1,2,3};
	int b = 87;

	z(a,b);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	return 0;
} 
void *z(int *x, int c)
{	 
	*(x+1) = c;
}