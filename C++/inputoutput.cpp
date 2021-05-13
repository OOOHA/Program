#include<iostream>
#include<string>

using namespace std;

int main()
{
    //only read one word using cin
    int a,b;
    cout << "input for cin:";
    cin >> a >> b; 
    cout << "cin's intput:" << a << b << endl;
    fflush(stdin);
    cout << endl;

    //cin end by space or tab or enter key
    char a1[20];
    cout << "intput:";
    cin >> a;
    cout << "output:" << a << endl;
    fflush(stdin);
    cout << endl;

    //can read space key using cin.getline
    char m[20];
    cout << "input:";
    cin.getline(m,20);//cin.getline actually has three variables cin.getline(the name of getting the char, the numbers of getting char, the end word of getting char)
    cout << "cin.getline's output:" <<  m << endl;
    fflush(stdin);
    cout << endl;

    //this cin.getline will end with the word 'g' 
    char m1[20];
    cout << "input \"abcdefghij\" and see the output:";
    cin.getline(m1,20,'g');
    cout << "cin.getline of abcdefighij's output:" <<  m1 << endl;
    fflush(stdin);
    cout << endl;

    //using getline, it can input space key and output it
    string str;
    cout << "input for getline:";
    getline(cin,str);
    cout << "getline's output:" << str << endl;
    fflush(stdin);

    return 0;
}