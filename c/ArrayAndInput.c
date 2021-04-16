#include <stdio.h>
#include<stdlib.h>

void func(int , char **);
void divide(void);
void display(char, int);

int main()
{
    char* p[3];
    char str[][5] = {
        {"abc","def","ghi"},
        {"jkl","mno","pqr"}
    };
    p[0] = &str[0][0];
    p[1] = str[1];
    p[2] = str[2];
    func(3, p);
    divide();

    char a;
    int b;
    printf("input a char:");
    a = getchar();
    printf("How many of %c do you want:" ,a);
    scanf("%d",&b);
    display(a,b);

    printf("\n");
    return 0;
}

void func(int n, char **str)
{
 int i;
 for(i = 0; i < n; i++)
  printf("str[%d] = %s\n", i, str[i]);
}

void divide()
{
    printf("===============================================================\n");
}

void display(char s,int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d.%c  ",i+1,s);
    }
    
}