#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int array[] = {0,1,2,3,4};
    vector v(10,0); // {0,0,0,0,0,0,0,0,0,0}
    vector v1(0,0);
    vector v3(v.begin(), v.end());
    v1.assign(10, 0); // v1 設 10 個 0
    v1.assign(v.begin(), v.end()); // v1 複制 v
    v1.assign(v.begin(), v.begin()+5); // 複製 v 前5個元素到 v1
    v1.assign(array, array+5); // 複製 array 前5個元素到 v1

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}