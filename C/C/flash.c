#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        sleep(1);
        system("clear");
    }
    printf("\n");
    return 0;
}
