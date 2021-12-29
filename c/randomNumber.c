#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printRandoms(int, int , int);

int main()
{
    int rangelow = 0;
    int rangemax = 0;
    int count = 0;

    printf("Please enter the variable range to be generated:\n");
    printf("From:");
    scanf("%d", &rangelow);
    printf("to:");
    scanf("%d", &rangemax);
    printf("How many numbers do you want:");
    scanf("%d", &count);
    
    srand(time(0)); // Use current time as seed for random generator
    printRandoms(rangelow, rangemax, count);

    return 0;
}

void printRandoms(int lower, int upper, int count)
{
    for (int i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}