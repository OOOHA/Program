#include<stdio.h>
#include<stdlib.h>

void prime(int, int);

int main()
{
    int start, end;
    printf("Please enter two numenders:");
    scanf("%d %d", &start, &end);

    printf("%d ~ %d have these prime numbers: ", start, end);
    prime(start, end);

    printf("\n");
    return 0;
}

void prime(int a, int b)
{
    if(a > b)
    {
        int x;
        x = a;
        a = b;
        b = x;
    }
    if(b >= 2)
    {
        if(a <= 2 || b <= 2)
        {
            printf("2 ");
        }

        for(int i = a; i <= b; i++)
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
}