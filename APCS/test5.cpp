#include<iostream>

using namespace std;

int main()
{

int sex, age;


while (cin >> sex && cin >> age)
{
    int marrage = age - 9;
    
    if (sex == 1)
    {
        if (marrage > 18)
        {
            cout << "You are marrageable" << endl;
        }else
        {
            cout << "You are not marrageable" << endl;
        }
        
    }else if (sex == 2)
    {
        if (marrage > 16)
        {
            cout <<"You are marrageable" << endl;
        }else
        {
            cout << "You are not marrageable" << endl;
        }
    }
   
    
}



return 0;
}