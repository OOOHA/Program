#include<iostream>

using namespace std;

int main(){

    int a;
    int ans;
    
    while (cin >> a)
    {
        ans = 0;
        while (a > 0)
        {
            a = a / 10;
            ans = ans + 1;
        }
        
        cout << ans <<endl;
    }
    



    return 0;
}