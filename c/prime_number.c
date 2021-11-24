#include<stdio.h>
#include<stdlib.h>

int main()
{
    int start, end;

    printf("Please enter two numenders:");
    scanf("%d %d", &start, &end);

    if(end > start && end >= 2)
    {
        printf("%d ~ %d have these prime numbers: ", start, end);

        if(start <= 2)
        {
            printf("2 ");
        }   
        for(int i = start; i <= end; i++)
        {
            for(int j = 2; j <= i; j++)
            {
                if(i % j == 0)
                {
                    break;
                }
                else if(i == j + 1)
                {
                    printf("%d ", i);
                } 
            }
        } 
    }
    else if(start > end && start >= 2)
    {
        printf("%d ~ %d have these prime numbers: ", end, start);

        if (end <= 2)
        {
            printf("2 ");
        }
        for(int i = end; i <= start; i++)
        {
            for(int j = 2; j <= i; j++)
            {
                if(i % j == 0)
                {
                    break;
                }
                else if(i == j + 1)
                {
                    printf("%d ", i);
                }
            }
        }
    }
    printf("\n");
    
    return 0;
}