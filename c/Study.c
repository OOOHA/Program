#include<stdio.h>
#include<stdlib.h>

void x(void);

int main()
{
    x();
    printf("\n");
    x();
    printf("\n");
    x();


    return 0;
}

void x()
{
    static int x = 10;
    printf("x = %d\n",x);
    x = x + 1;
    printf("x2 = %d\n",x);
    printf("========================\n");
    int y = 20;
    printf("y = %d\n",y);
    y = y + 1;
    printf("y2 = %d\n",y);
    printf("========================\n");
    static int b;
    b = 10;
    printf("b = %d\n",b);
    b = b+2;
    printf("b2 = %d\n",b);
    printf("========================\n");
    printf("========================\n");

}