#include <iostream>
#include <vector>
using namespace std;

int T,n,input;
vector<vector<int>> value;
vector<vector<int>> dp;

void findmax()
{
	if (n > 1)
	{
		dp[0][1] = dp[1][0] + value[0][1];
		dp[1][1] = dp[0][0] + value[1][1];
	}
	for (int i = 2; i < n; i++)
	{
		dp[0][i] = max(dp[1][i - 2] + value[0][i], dp[1][i - 1] + value[0][i]);
		dp[1][i] = max(dp[0][i - 2] + value[1][i], dp[0][i - 1] + value[1][i]);
	}
	cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
	value.clear(); dp.clear();
}

int main()
{
	cin >> T;
	while (T--)
	{
		cin >> n;
		value.resize(2);
		for (int i = 0; i < 2*n; i++)
		{
			cin >> input;
			if (i < n) value[0].push_back(input);
			else value[1].push_back(input);
		}
		dp = value;
		findmax();
	}
	return 0;
}