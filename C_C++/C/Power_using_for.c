#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    c = 1;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++)
    {
        c = c * a;
    }
    printf("%d", c);

    return 0;
}