#include<stdio.h>
#include<stdlib.h>

void nine(int i, int j);

int main() {
    
    nine(1,1);
    
    return 0;
}

void nine(int i, int j)
{
    if (i < 10)
    {
        if (j < 10)
        {
            printf("%d*%d=%d\t", i, j, i*j);
            nine(i, j + 1);
        }else{
            printf("\n");
            i++;
            nine(i, 1);
        }
    }
}