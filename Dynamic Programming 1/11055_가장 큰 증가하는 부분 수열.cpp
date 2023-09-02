#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A;
vector<int> value;
vector<int> dp;

void find_answer()
{
	dp = value;
	for (int i = 1; i < A; i++)
		for (int j = 0; j < i; j++)
			if (value[i] > value[j])
				dp[i] = max(dp[i], dp[j] + value[i]);
	sort(dp.begin(), dp.end());
	cout << dp.back();
}

int main()
{
	cin >> A;
	value.resize(A);
	dp.resize(A);
	for (int i = 0; i < A; i++)
		cin >> value[i];
	find_answer();
	return 0;
}