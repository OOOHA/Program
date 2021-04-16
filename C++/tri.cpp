#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

int arr3[5][6]={};
arr3[0][0]=arr3[0][1]=1;//第一列前二個內容為1
for(int i=1;i<5;i++) 
{
    arr3[i][0]=1;
    for(int j=1;j<=i+1;j++)
    {
        arr3[i][j]=arr3[i-1][j-1]+arr3[i-1][j];
    }
}
for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr3[i][j]!=0)
            cout<<setw(3)<<arr3[i][j];
        }
        cout<<endl;
    }

    system("pause");

    return 0;
}