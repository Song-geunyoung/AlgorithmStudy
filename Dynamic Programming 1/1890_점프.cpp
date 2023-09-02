#include <iostream>
using namespace std;

int N;
int arr[101][101];
long long dp[101][101];
void find_answer()
{
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			for (int k = 1; k <= i; k++)
			{
				if (k > 9) break;
				if (arr[i - k][j] == k && dp[i - k][j] > 0)
					dp[i][j] += dp[i - k][j];
			}
			for (int k = 1; k <= j; k++)
			{
				if (k > 9) break;
				if (arr[i][j - k] == k && dp[i][j - k] > 0)
					dp[i][j] += dp[i][j - k];
			}
		}
	cout << dp[N-1][N-1];
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			dp[i][j] = 0;
		}
	find_answer();

	return 0;
}