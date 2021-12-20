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

    printf("\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        //printf("%d", i);
        printf("*");

        printf("\n");
    }
    
    printf("\n");
    printf("--------------------------------------\n");
    
	for(int i = 0; i <= 4; i++)
    {
		for(int j = 0; j <= 4 - i; j++)
        {
	     	printf(" ");
		}
		for(int k = 0; k <= i * 2; k++)
        {
		  printf("*");
          //printf("%d", i);
		}
		printf("\n");
	}
    
    printf("\n");
    printf("--------------------------------------\n");

    for(int i = 0; i <= 4; i++)
    {
		for(int j = 0; j <= i; j++)
        {
			printf(" ");
		}
		for(int k = 0; k < 9 - i * 2; k++)
        {
		  printf("*");
          //printf("%d", i);
		}
		printf("\n");
    }
    
    
	return 0;
}