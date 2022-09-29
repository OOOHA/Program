#include<iostream>

using namespace std;

int main()
{
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    
    cout << "Before sort:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "    ";
    }
    
    cout << endl;
    cout << "After sort:" << endl;
    cout << "Min to Max:" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                int mid;
                mid = a[i];
                a[i] = a[j];
                a[j] = mid;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "    ";
    }
    
    cout << endl;
    cout << "Max to Mini:" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if(a[i] < a[j])
            {
                int mid;
                mid = a[i];
                a[i] = a[j];
                a[j] = mid;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "    ";
    }

    return 0;
}