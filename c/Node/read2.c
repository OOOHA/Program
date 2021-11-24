#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    FILE *file_handle = fopen ("1.txt", "r");
	FILE *file_handle1 = fopen ("2.txt", "r");
	FILE *file_handle2 = fopen ("3.txt", "r");
	FILE *file_handle3 = fopen ("4.txt", "r");

	long long account_number[10];
	bool account_type[10];
	long long money[10];

	for (int i = 0; i < 10; i++)
	{
    	fscanf (file_handle, "%lld %d %lld", &account_number[i], &account_type[i], &money[i]);
		printf("%lld %d %lld\n" ,account_number[i], account_type[i], money[i]);
	}
	fclose(file_handle);
    printf("\n=====================================\n");
    for (int i = 0; i < 10; i++)
	{
    	fscanf (file_handle1, "%lld", &account_number[i]);
		printf("%lld\n", account_number[i]);
	}
	fclose(file_handle1);
    return 0;
}