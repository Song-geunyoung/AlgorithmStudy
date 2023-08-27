#include<iostream>
using namespace std;

int T, N;
int cnt = 0;
int dp[11] = { 0, };

int main()
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	cin >> T;

	while(T--)
	{
		cin >> N;
		cnt = 0;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[N] << '\n';
	}

	return 0;
}