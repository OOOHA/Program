#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x;
    
    scanf("%d", &x);

    x = pow(x, 2);
    printf("%d \n", x);
    printf("%d \n", pow(x, 2));

    printf("----------Part 1----------\n");

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.2f \n", pow(a, b));
    
    return 0;
}