#include<stdio.h>
#include<stdlib.h>

int GCD(int *,int *);

int main()
{   
    int a,b;

    scanf("%d%d" ,&a,&b);//使用者輸入
    printf("%d和%d的最大公因數為:" ,a,b);//輸出結果前半段
    GCD(&a,&b);//呼叫function
    printf("%d" ,a);//輸出結果答案
    
    return 0;
}

int GCD(int *x,int *y)
{
    if (x < y)//判斷大小交換進行輾轉相除法
    {
        int c;
        c = *x;
        *x = *y; 
        *y = c;
    }
    
    int r = 1;//輾轉相除法計算材料
    while (r != 0)//輾轉相除法
    {
        r = *x % *y;
        *x = *y;
        *y = r;
    }
    
}