#include<iostream>

using namespace std;

int main()
{

    char t, item[] = {'2','8','3','1','9'};
    int a, b, c, count = 5;
    for(a = 0; a<count-1; a = a+1)
    {
        c = a;
        t = item[a];
for (b = a+1 ; b < count; b = b+1)
{
    if (item[b] < t)
    {
        c = b;
        t = item[b];
    }
    if ((a == 2) && (b == 3))
    {
        cout << t << c <<endl;
    }
    
}


    }
    
    return 0;
}