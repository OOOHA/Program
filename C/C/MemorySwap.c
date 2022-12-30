#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);

int main()
{
    int a = 5, b = 10;
    printf("Before swap : a=%d,b=%d\n",a,b);
    printf("&a=%p,&b=%p\n",&a,&b);
    swap(&a,&b);
    printf("After swap : a=%d,b=%d\n",a,b);
    printf("&a=%p,&b=%p\n",&a,&b);
    return 0;
}

void swap(int *p1,int *p2)
{
    int x;
    x = *p1;
    *p1 = *p2;
    *p2 = x;
    printf("&p1=%p,&p2=%p\n",&p1,&p2);

}