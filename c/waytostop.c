#include<stdio.h>
#include<stdlib.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("Press enter:");//this csn make the code pause and continue after you press something
    getchar();

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}