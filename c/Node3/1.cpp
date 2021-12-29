#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Increase(int x, int num, int heap[]);
void Delete(int heap[], int num, int sorts[], int counts);
void Show(int sorts[], int num);

int main()
{
    FILE *input;
    FILE *input2;
    int MinHeap[3000];
    int sorts[1100];
    int add = 0;
    int num = 1;
    int counts = 1;
    float start, end, time;

    input = fopen("1.txt", "r");
    while(!feof(input))
    {
        fscanf(input,"%d\n", &add);
        Increase(add, num, MinHeap);
        num++;
    }
    fclose(input);

    start = clock();
    for(int i = num - 1; i >= 1; i--)
    {
        Delete(MinHeap, i, sorts, counts);
        counts++;
    }

    Show(sorts, num);
    end = clock();

    time = (end - start) / CLOCKS_PER_SEC;
    printf("Time:%f\n", time);

    printf("===============================================================================step 2=====================================================================================================\n");

    input = fopen("1.txt", "r");
    input2 = fopen("2.txt", "r");

    num = 1;
    counts = 1;

    while(!feof(input))
    {
        fscanf(input, "%d\n", &add);
        Increase(add, num, MinHeap);
        num++;
    }
    while(!feof(input2))
    {
        fscanf(input2, "%d\n", &add);
        Increase(add, num, MinHeap);
        num++;
    }
    fclose(input2);
    fclose(input);

    start = clock();
    for(int i = num - 1; i >= 1; i--)
   	{
        Delete(MinHeap, i, sorts, counts);
        counts++;
    }
    Show(sorts, num);
    end = clock();

    time = (end - start) / CLOCKS_PER_SEC;
    printf("Time:%f\n", time);
}

void Show(int sorts[], int num)
{
    for(int j = 1; j < num; j++)
    {
        printf("%5d ", sorts[j]);
    }
}
void Increase(int x,int num,int heap[])
{
    int temp;
    heap[num] = x;
    while(heap[num / 2] > heap[num])
    {
        temp = heap[num / 2];
        heap[num / 2] = heap[num];
        heap[num] = temp;
        num /= 2;
    }
}
void Delete(int heap[],int num,int sorts[],int counts)
{
    int x = 1;
    int temp = 0;
    sorts[counts] = heap[1];
    heap[1] = heap[num];
    heap[num] = 70000;

    while(heap[x] > heap[2 * x] || heap[x] > heap[(2 * x) + 1])
    {      
        if(heap[2 * x] > heap[(2 * x) + 1])
        {
            temp = heap[2 * x + 1];
            heap[2 * x + 1] = heap[x];
            heap[x] = temp;
            x = 2 * x + 1;
        } 
		else if(heap[2 * x] < heap[(2 * x) + 1])
        {
            temp = heap[2 * x];
            heap[2 * x] = heap[x];
            heap[x] = temp;
            x = 2 * x;
        }

        if(2 * x + 1 > num)
        {
            break;
        }
    }
}