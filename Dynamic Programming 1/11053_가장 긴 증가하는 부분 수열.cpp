#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A;
vector<int> value;
vector<int> dp;

void find_answer()
{
	dp[0] = 1;
	for (int i = 1; i < A; i++)
	{
		int maxValue = 0;
		for (int j = 0; j < i; j++)
		{
			if (maxValue < dp[j] && value[j] < value[i])
				maxValue = dp[j];
		}
		dp[i] = maxValue + 1;
	}
	sort(dp.begin(), dp.end());
	cout << dp.back();
}

int main()
{
	cin >> A;
	value.resize(A), dp.resize(A);
	for (int i = 0; i < A; i++)
		cin >> value[i];
	find_answer();

	return 0;
}