#include<stdio.h>
#include<stdlib.h>

int main()
{

    for (int i = 1 ; i <= 9 ; i++)
    {
        for (int j = 1 ; j <= 9 ; j++)
        {
            printf("%d*%d=%d\t" , j , i , i * j);
        }
        printf("\n");
    }
    
    return 0;
}