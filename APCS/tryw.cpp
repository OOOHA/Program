#include<iostream>
using namespace std;

int main()
{
    int i, j;

    for( i=1 ; i<=9 ; i=i+1 )
    {
        for( j=1 ; j<=9 ; j=j+1 )
        {
            cout << i << "*" << j << "=" << i*j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}