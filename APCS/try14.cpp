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
    i = 0;
    while (i < n)
    {
        cout << high[i] << endl;
        i = i + 1;
        
    }
    





    return 0;
}