#include<stdlib.h>
#include<stdio.h>

int main()
{

    int n , max = 0 , ave , sum = 0 , sum2;

    printf("Input numbers(5 to end):");

    /*do
    {
        scanf("%d" ,&n);

        if (n > max)
        {
            max = n;
        }
        
        
    } while (n != 5);*/

    while(n != 5)
    {
        scanf("%d" ,&n);

        if (n > max)
        {
            max = n;
        }

        sum = sum +1;
        
        if (n != 5)
        {
            sum2 += n;
        }
        
    }
    
    

    printf("Max is:%d\n" , max);
    sum = sum -1;
    printf("Entered(Without 5):%d\n" , sum);
    printf("average(Without 5):%.2f" ,(float)sum2 / (float)sum);


    return 0;
}