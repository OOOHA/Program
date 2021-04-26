#include<iostream>

using namespace std;

int main()
{
    int start;
    int wave_hight;
    int wave_count;

    cin >> start;
    cin >> wave_hight;
    cin >> wave_count;


for (int i = 0; i < wave_count; i++)
{
    for (int i = start; i < wave_hight; i++)
    {
        cout << endl;
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        
    }
    for (int a = wave_hight ; a > start - 1 ; a--)
    {
        cout << endl;
        for (int b = 0 ; b < a ; b++)
        {
            cout << a;
        }
        
    }
}
    return 0;
}