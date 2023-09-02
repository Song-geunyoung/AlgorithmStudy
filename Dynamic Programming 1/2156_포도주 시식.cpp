#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> value;
vector<int> dp;

int main()
{
	cin >> n;
	value.resize(n + 1); dp.resize(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> value[i];

	dp[0] = value[0] = 0;
	dp[1] = value[1];
	if (n >= 2) dp[2] = value[1] + value[2];
	for (int i = 3; i <= n; i++)
		dp[i] = max(max(dp[i - 2] + value[i], dp[i - 3] + value[i - 1] + value[i]), dp[i - 1]);

	sort(dp.begin(), dp.end());
	cout << dp.back();
	return 0;
}