#include<stdio.h>
#include<stdlib.h>


int main()
{

	for (int i = 0; i < 5; i++)
    {
        printf(" \n");

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        
    }

    printf("\n");
    printf("--------------------------------------\n");

    for (int a = 5 ; a > 0 ; a--)
    {
        printf(" \n");
        for (int b = 0 ; b < a ; b++)
        {
            printf("*");
        }
        
    }

    printf("\n");
    printf("--------------------------------------\n");

    for (int x = 0 ; x < 5 ; x++)
    {
        for (int y = 0 ; y <= 5-x ; y++)
        {
            printf(" ");
            for (int z = 0 ; z <= x*2 ; z++)
            {
                printf("*");
            }
            
        }
        
        printf("\n");
    }
    
    
    
	return 0;
}