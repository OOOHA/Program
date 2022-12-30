#include <stdio.h>

#define SIZE 69
int amount = 0;

void sortbts(int array[]);
void sortstb(int array[]);

int main()
{
	printf("input array length:");
	scanf("%d", &amount);
	int array[SIZE] = {0};

   	printf("input %d number: ", amount);

	for(int i = 0; i < amount ; i++)
	{
		scanf("%d", &array[i]);
	}
	sortbts(array);
	sortstb(array);


	return 0;
}

void sortbts(int array[])
{
	int temp = 0;

	printf("Big to small: ");
    for(int i = 0; i < amount; i++)
	{
		for(int j = i + 1; j < amount; j++)
		{
			if(array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		printf("%d ", array[i]);
	}

	printf("\n");
}

void sortstb(int array[])
{
	int temp = 0;
	
	printf("Small to big: ");
    for(int i = 0; i < amount; i++)
	{
		for(int j = i + 1; j < amount; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		printf("%d ", array[i]);
	}

	printf("\n");
}