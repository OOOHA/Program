#include<iostream>
using namespace std;

int main()
{
    int suckpress;
    int relexpress;
    //int heart;
    int rate;

    cout << "Please enter:" << endl;
    cout << "1.Heart rate:";
    cin >> rate;
    cout << "2.diastolic:";
    cin >> relexpress;
    cout << "3.systolic:" ;
    cin >> suckpress;

    if (rate > 80 )
    {
        cout << "Heart rate too high!" << endl;
    }
    else if (rate < 60)
    {
        cout << "Heart rate too low!" << endl;
    }

    if (relexpress > 70)
    {
        cout << "diastolic too low!" << endl;
    }
    else if (relexpress < 90)
    {
        cout << "diastolic too high!" << endl;
    }
    
    if (suckpress < 110)
    {
        cout << "systolic too low" << endl;
    }
    else if (suckpress > 130)
    {
        cout << "systloic too high" << endl;
    }
    int mins = suckpress - relexpress;
    if (mins < 0)
    {
        mins = mins * (-1);
    }
    
    if (mins > 30)
    {
        cout << "You got a problem!" << endl;
    }
    
    return 0;
}