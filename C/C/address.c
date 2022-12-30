#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Address %d: %x \n", i, x[i]);
    }

    return 0;
}