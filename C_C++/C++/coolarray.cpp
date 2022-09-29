#include<iostream>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    cout << "a[2]:" << a[2] << endl;
    cout << "*(a + 2):" << *(a + 2) << endl;
    cout << "*(2 + a):" << *(2 + a) << endl;
    cout << "2[a]:" << 2[a] << endl;
    
    return 0;
}