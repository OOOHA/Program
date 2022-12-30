#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_handle = fopen ("test.txt", "r");

	int nums;

    while (fscanf (file_handle, " %d", &nums) != EOF)
    {
        printf(" %d " ,nums);
    }
    

	fclose(file_handle);
    return 0;
}