#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> value;
vector<int> dp;

void find_answer()
{
	dp[0] = value[0];
	for (int i = 1; i < n; i++)
		dp[i] = max(value[i], dp[i - 1] + value[i]);
	sort(dp.begin(), dp.end());
	cout << dp.back();
}

int main()
{
	cin >> n;
	value.resize(n); dp.resize(n);
	for (int i = 0; i < n; i++)
		cin >> value[i];
	find_answer();
	return 0;
}