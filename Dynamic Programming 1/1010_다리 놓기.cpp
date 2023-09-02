#include <iostream>
#include <vector>
using namespace std;

int T, N, M;
void combination(int n, int r)
{
	int dp[30][30];
	//nCr = n-1Cr-1 + n-1Cr;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= i; j++)
			if (i == j || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];

	cout << dp[n][r] << '\n';
}

int main()
{
	cin >> T;
	while (T--)
	{
		cin >> N >> M;
		combination(M, N);
	}
	return 0;
}