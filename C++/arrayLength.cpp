#include<iostream>

using namespace std;

int main()
{
    int array1[10] = {0};
    cout << "array1 length: ";
    cout << sizeof(array1)/sizeof(array1[0]) << endl;

    int array2[] = {0};
    cout << "array2 length: ";
    cout << sizeof(array2)/sizeof(array2[0]) << endl;

    int array3[] = {0, 1, 2, 3};
    cout << "array3 length: ";
    cout << sizeof(array3)/sizeof(array3[0]) << endl;

    return 0;
}