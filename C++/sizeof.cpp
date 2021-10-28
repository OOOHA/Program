#include<iostream>

using namespace std;
 
int main()
{
    char a[] = "Hi"; 
    int b;
    long c;
    float d;
    double e;
    
    cout << "char: " << sizeof(a) << " Bytes" << endl
         << "int: " << sizeof(b) << " Bytes" << endl
         << "long: " << sizeof(c) << " Bytes" << endl
         << "float: " << sizeof(d) << " Bytes" << endl
         << "double: " << sizeof(e) << " Bytes" << endl;

    return 0;
}