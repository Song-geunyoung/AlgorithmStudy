#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, input, ans;
vector<int> stair;
vector<int> dp;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> N;
	stair.resize(N + 1), dp.resize(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> stair[i];

	dp[1] = stair[1];
	if (N >= 2)
		dp[2] = stair[1] + stair[2];
	if (N >= 3)
		dp[3] = max(stair[1], stair[2]) + stair[3];

	for (int i = 4; i <= N; i++)
		dp[i] = max( (dp[i - 2] + stair[i]), (dp[i - 3] + stair[i - 1] + stair[i]) );
	cout << dp[N];

	return 0;
}