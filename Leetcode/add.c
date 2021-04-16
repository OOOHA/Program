#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numin[200];
    int target;
    int sum;

    do
    {
        for (int i = 0; i < target; i++)
        {
            sum += numin[i];
        }
        
    } while (sum == target);
    

    return 0;
}