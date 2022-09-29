#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
	while (1)
	{
		char a = 33;//ASCII of !
		char b = 35;//ASCII of #
		char c = 37;//ASCII of %
		char d = 38;//ASCII of &
		printf("%c %c %c %c" ,a,b,c,d);
		system("cls");// 清除畫面
	}
	
    return 0;
}