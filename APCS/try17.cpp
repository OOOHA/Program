#include<iostream>

using namespace std;

int main()
{

    int N;
    int num[101];
    int i;
    int ans_min, ans_max;

    cin >> N;
    i = 0;
    while( i < N )
    {
        cin >> num[i];
        i = i+1;
    }


    ans_min = 20000;
    ans_max = 0;
    i = 0;
    while( i < N )
    {
        if( num[i] > ans_max )
            ans_max = num[i];
        if( num[i] < ans_min )
            ans_min = num[i];
        i = i+1;
    }

    cout << ans_max << " " << ans_min << endl;






    return 0;
}
/*
輸入說明
第一列： 一個整數N，代表班上有幾名學生。1 <= N <= 100

第二列： N個整數，代表每位學生的心靈數值。1 <= 心靈數值 <= 10000。

輸出說明
共一列：兩個整數以空白隔開，分別為最大、最小的心靈數值。
*/