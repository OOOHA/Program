#include<iostream>

using namespace std;

int main()
{
    int a, b, c;

    while(cin >> a >> b >> c)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            cout << "YES" << endl;
        }
        else //if (a + b <= c || a + c <= b || b + c <= a)
        {
            cout << "NO" << endl;
        }
        
    }

return 0;
}