#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, P, sum;
vector<int> capacity;
int main()
{
	cin >> N;
	capacity.resize(N);

	for (int i = 0; i < N; i++)
		cin >> capacity[i];
	sort(capacity.begin(), capacity.end());

	for (int i = 0; i < N; i++)
		sum += capacity[i] * (N - i);
	cout << sum;

	return 0;
}