#include<iostream>

using namespace std;

int main()
{

    int score = 0; 
    int level = 0; 

    cout << "輸入分數："; 
    cin >> score; 
    level = score/10; 

    switch(level) { 
        case 10: 
        case 9: 
            cout << "得A" << endl; 
            break; 
        case 8: 
            cout << "得B" << endl; 
            break; 
        case 7: 
            cout << "得C" << endl; 
            break; 
        case 6: 
            cout << "得D" << endl; 
            break; 
        default: 
            cout << "得E(不及格)" << endl; 
    } 


return 0;
}