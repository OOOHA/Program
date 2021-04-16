#include<iostream>

using namespace std;

int main()
{   
    int high[101];
    int n;
    int i = 0;
    cin >> n;

    while (i < n)
    {
        cin >> high[i];
        i = i + 1;
        
    }
    cout << "------------------"<< endl;
    i = n - 1;
    while (i >= 0)
    {
        cout << high[i] << endl;
        i = i - 1;
        
    }
    





    return 0;
}