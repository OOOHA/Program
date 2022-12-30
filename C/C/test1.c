#include <stdio.h>

int str2int(unsigned char *str);

int main(int argc, const char * argv[])
{
    while(1)
    {
        int end;
        unsigned char *str;

        printf("Enter string:");
        scanf("%s", &str);

        end = str2int(&str);
        printf("Result:%d\n\n", end);
    }

    return 0;
}

int str2int(unsigned char *str)
{
    int res = 0;
    int sign = 0;

    while (*str != NULL)
    {
        if (*str == '-')
        {
            str++;
            sign = 1;
        }

        res = res * 10 + (*str) - 48;
        str++;
    }

    if (sign == 1)
    {
        res = res*(-1);
    }
    
    return res;
}