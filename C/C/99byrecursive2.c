#include<stdlib.h>
#include<stdio.h>

int nine(int x , int y);

int main()
{
    nine(1,1);

    return 0;
}

int nine(int x , int y)
{
    if(x < 10)
    {
        if (y < 10)
        {   
            printf("%d*%d=%2d ", x,y,x*y);
            nine(x,y+1);
        }
        else
        {
            printf("\n");
            x++;
            nine(x,1);
        }
    }
}