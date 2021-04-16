#include<iostream>
using namespace std;

int main()
{
    int N;
    int T;
    int n, t, m;
    int money[105];

    int i;

    cin >> N;
    cin >> T;

    //let all money be 0
    i=0;
    while( i<N )
    {
        money[i] = 0;

        i = i+1;
    }

    //deposit, withdraw
    i = 0;
    while( i<T )
    {
        cin >> n >> t >> m;

        if( t==1 )
        {
            money[n] = money[n] + m;
        }
        if( t==2 )
        {
            money[n] = money[n] - m;
        }

        i = i+1;
    }

    //output
    i = 0;
    while( i<N )
    {
        cout << i << " : " << money[i] << endl;
        i = i+1;
    }

    return 0;
}
/*
輸入說明
第一列：一個整數N，代表有N個顧客。 N <= 100

第二列：一個整數T，代表有T筆交易。 T <= 10000

接著T列：三個整數n、t、m。代表第n名顧客，存款或提款了m元。 t=1代表存款；t=2代表提款。

假設顧客編號是 0 ~ N-1，每名顧客帳戶一開始存有 0 元。

輸出說明 
經過所有交易後，每名顧客的存款為多少。存款可以是負的。*/