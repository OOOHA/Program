#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter:";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;

    return 0;
}