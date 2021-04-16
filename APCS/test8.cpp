#include<iostream>

using namespace std;

int main()
{

    int a1, an, d;
    int i;

    cin >> a1 >> an >> d;

    i = a1;
    while( i<=an )
    {
        cout << i << " ";

        i = i+d;
    }
    cout << endl;

        int sum = 0;
        sum = i + (i+d);
        cout << sum << endl;
    
    
    
    


    return 0;
}