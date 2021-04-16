#include<iostream>

using namespace std;

int main(){

    int side;
    int result;
    int i;

    while (cin >> side)
    {
        if (side == 0)
        {
            break;
        }
            result = 0;
            i = 0;
            while (i < side)
            {
                
                result = result + (side - i) * (side - i);
                i = i + 1; 

            }
            
                
        
        cout <<result << endl;
        
    }
    




    return 0;
}