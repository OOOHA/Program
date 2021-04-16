#include<iostream>
using namespace std;

int main()
{
    int numA = 60;
    int numB = 80;
    int tmpA;
    int tmpB;

    tmpA = numA;
    tmpB = numB;

    numA = tmpB;
    numB = tmpA;

    cout << numA << " " << numB << endl;

    return 0;
}