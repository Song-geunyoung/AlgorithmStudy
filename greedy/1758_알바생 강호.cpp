#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int tip, N;
long long sum = 0;
vector<int> capacity;

int main()
{
	cin >> N;
	capacity.resize(N);
	for (int i = 0; i < N; i++)
		cin >> capacity[i];
	sort(capacity.begin(), capacity.end());

	for (int i = 0; i < N; i++)
		if (capacity[i] - (N - i - 1) > 0)
			sum += capacity[i] - (N - i - 1);

	cout << sum;
	return 0;
}