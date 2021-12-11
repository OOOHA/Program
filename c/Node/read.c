#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int read()
{
    const char* filename = "1.txt";

    FILE* input_file = fopen(filename, "r");
    
    if (!input_file)
    {
        exit(EXIT_FAILURE);
    }

    struct stat sb;
    if (stat(filename, &sb) == -1)
    {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    char* file_contents = malloc(sb.st_size);
    fread(file_contents, sb.st_size, 1, input_file);

    printf("%s\n", file_contents);

    fclose(input_file);
    free(file_contents);

    exit(EXIT_SUCCESS);
}