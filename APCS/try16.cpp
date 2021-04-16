#include<iostream>

using namespace std;

int main()
{

    int n;
    int m;
    int grade[101];
    int i = 1;
    int a;

    cin >> n >> m;

    while (i <= n)
    {
        cin >> grade[i];
        i = i + 1;
    }

    cout << "----------"<< endl;

    i = 1;
    while (i <= m)
    {
        cin >> a;
        cout << grade[a] << endl;
        i = i + 1;
    }
    
    
    



    return 0;
}