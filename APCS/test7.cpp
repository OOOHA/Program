#include<iostream>

using namespace std;

int main()
{

    int hour;
    int min;
    while (cin >> hour >> min)
    {
        if (hour <= 7 && min < 30)
        {
            cout << "off school" << endl;

        }
        else if (hour >= 17 && min >= 0)
        {
            cout << "off school" << endl;
        }
        else
        {
            cout << "At school" << endl;
        }
    }
    





    return 0;
}