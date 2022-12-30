#include <iostream>
#include <cstring>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
	int dp[W + 1];
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i < n + 1; i++)
	{
		for (int w = W; w >= 0; w--)
		{
			if (wt[i - 1] <= w)
			{	
				dp[w] = max(dp[w],
							dp[w - wt[i - 1]] + val[i - 1]);
			}
		}
	}
	return dp[W];
}
int main()
{
	
	// int W = 0;
	// int amount = 0;
	// int val[100] = {};
	// int wt[100] = {};
	// cout << "Enter Weight:";
	// cin >> W;
	// cout << "Enter amount:";
	// cin >> amount;
	// for (int i = 0; i < amount; i++)
	// {
	// 	cout << "Enter " << i+1 << " item's Weight:";
	// 	cin >> wt[i];
	// 	cout << "Enter " << i+1 << " item's Value:";
	// 	cin >> val[i];
	// }
	int W = 60;
	int amount = 3;
	int val[3] = {100,280,120};
	int wt[3] = {10,40,20};

	cout << knapSack(W, wt, val, amount);
	return 0;
}