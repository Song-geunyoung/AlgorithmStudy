#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<long long> vec(n + 1);

	vec[1] = 1, vec[2] = 3;
	for (int i = 3; i <= n; i++)
		vec[i] = (vec[i - 2] * 2 + vec[i - 1])%10007;

	cout << vec[n];
	return 0;
}