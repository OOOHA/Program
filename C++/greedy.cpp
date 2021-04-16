#include<iostream>

using namespace std;

int main()
{

    int money[12];
    money[11] = 30;
    money[10] = 50;
    money[9] = 90;
    money[8] = 150;
    money[7] = 300;
    money[6] = 350;
    money[5] = 400;
    money[4] = 450;
    money[3] = 500;
    money[2] = 750;
    money[1] = 1000;
    money[0] = 1150;

    int n, i;

    while( cin >> n )
    {
        cout << n << "=";
        for( i=0 ; i<=11 ; i++ )
        {
            if( n >= money[i] )
            {
                cout << money[i] << "*" << n/money[i] << " ";
                n = n%money[i];
            }
        }
        cout << endl;
    }

    return 0;
}

