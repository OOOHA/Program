#include<iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    int total;
    int a, b;
    int min = rand(); 
    cout << "Intput total money:";
    cin >> total;

    if (total < 0 || total ==0)
    {
        cout << "Leslie are you OK???";
    }
    else
    {
        random_device rd;   // non-deterministic generator
        mt19937 gen(rd());  // to seed mersenne twister.
        uniform_int_distribution<> dist(1,total);
        a = dist(gen);
        b = total - a;

        cout << "1st persion:" << a << endl;
        cout << "2nd persion:" << b << endl;
    }
    

    return 0;
}