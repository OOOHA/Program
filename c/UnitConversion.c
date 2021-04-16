#include<stdlib.h>
#include<stdio.h>

int main()
{
    //1foot = 12 inches
    //1 inches = 2.54 cm

    int tall;
    float inch;
    int inch_f;
    int foot;

    printf("Enter how tall you are:");
    scanf("%d" ,&tall);

    foot = tall / 30.48;

    printf("%d feet  " ,foot);

    inch_f = tall / 2.54;
    inch_f = inch_f % 12;

    printf("%d" ,inch_f);

    return 0;
}