#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    printf("Press enter to generate a random number between 0 and 100");

    while(1)
    {
        int random = rand() % 100 + 1;
        getchar();
        printf("The random number is %d", random);
    }
    
    return 0;
}