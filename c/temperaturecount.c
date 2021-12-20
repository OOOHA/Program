#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_handle = fopen ("test.txt", "r");

	int temperature = 0;
    int cold = 0;
    int hot = 0;
    int pleasant = 0;
    float times = 0;
    float sum = 0;
    float average = 0;
    while (fscanf (file_handle, " %d", &temperature) != EOF)
    {
        if (temperature >= 85)
        {
            hot++;
        }
        else if (temperature <= 84 && temperature > 60)
        {
            pleasant++;
        }
        else
        {
            cold++;
        }
        sum += temperature;
        times++;
    }

    printf("Cold days:%d\n", cold);
    printf("Hot days:%d\n", hot);
    printf("Pleasant days:%d\n", pleasant);

    average = sum / times;
    printf("average:%.2f\n", average);

	fclose(file_handle);
    return 0;
}