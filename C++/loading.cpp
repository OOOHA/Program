#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	int all_block_num = 1000;
	for (int i = 0; i<all_block_num; i++)
	{
		if (i<all_block_num-1)
		{
			printf("\rLoading[%.2lf%%]:", i*100.0 / (all_block_num - 1));
		}
		else
		{
			printf("\rComplete[%.2lf%%]:", i*100.0 / (all_block_num - 1));
		}
		int show_num = i * 20 / all_block_num;
		for (int j = 1; j <= show_num; j++)
		{
			cout << "|";
			Sleep(10);
		}
		
	}
	cout << endl;
	return 0;
}