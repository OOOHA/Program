#include<stdio.h>

int main()
{
    int a = 0;
    printf("%d %d %d \n" ,a ,a++ , ++a);
    a = 0;
    printf("%d %d %d \n" ,++a ,a++ , a);
    a = 0;
    printf("%d\n" ,a++);
    a = 0;
    printf("%d\n" ,++a);
    a = 0;
    printf("%d %d\n" ,a++, ++a);
     a = 0;
    printf("%d %d\n" ,++a, a++);
    return 0;
}  