#include<iostream>
#include<cmath>

using namespace std;

int main()
{

int student_amount;
double sum = 0, ave;

cout << "輸入學生人數:";
cin >> student_amount;

int score[student_amount];

for (int i = 0; i < student_amount; i++)
{
    cout << "輸入第" << i + 1 << "位學生分數:" << endl;
    cin >> score[i];
}
for (int i = 0; i < student_amount; i++)
{
    sum += score[i];
}

ave = sum / student_amount;
cout << "總分:" << sum << endl;
cout << "平均：" << ave << endl;


return 0;
}