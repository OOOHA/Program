#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdlib.h>
#include<time.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

using namespace std;

int main()
{


    srand( time(NULL) );

    for (int  x = 0; x < 100; x++)
    {
        float ans = ((x+52.8)*5-3.9343)/0.5-10*x;
        cout << fixed  <<  setprecision(4)  << ans << endl;
    }
    cout << "----------以下為亂數計算----------" << endl;
    for (int i = 0 ; i < 10 ; i++)
    {
        int t = 1;
        float ans3 = ((t+52.8)*5-3.9343)/0.5-10*t;
        int a =rand();
        float ans2 = ((a+52.8)*5-3.9343)/0.5-10*a;
        
        if (ans2 == ans3)
        {
            cout << "此亂數為:" << a << endl;
            cout << fixed  <<  setprecision(4)  << GREEN << ans2 << RESET << endl;
        }
        else
        {
            cout << "此亂數為:" << a << endl;
            cout << fixed  <<  setprecision(4)  << RED << ans2 << RESET << endl;
        }
        
    }
    return 0;
}