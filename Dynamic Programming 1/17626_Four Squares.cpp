#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> dp(50001, 4);

void fillArr()
{
	for (int i = 1; i * i <= 50000; i++)
		dp[i*i] = 1;

	for (int i = 2; i <= 50000; i++)
	{
		for (int j = 1; j * j <= i; j++)
		{
			if (dp[i] == 1 || dp[i] == 2) break;
			dp[i] = min(dp[i], dp[j*j] + dp[i - j * j]);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	fillArr();
	cin >> n;
	cout << dp[n];
}