#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, C;
long long sum = 0;
vector<int> capacity;

int main()
{
	cin >> N;
	capacity.resize(N);
	for (int i = 0; i < N; i++)
		cin >> capacity[i];
	sort(capacity.begin(), capacity.end(), greater<int>());

	while (capacity.size() >= 3)
	{
		sum += capacity[0];
		sum += capacity[1];
		for (int i = 0; i < 3; i++)
			capacity.erase(capacity.begin());
	}
	for (int i = 0; i < capacity.size(); i++)
		sum += capacity[i];
	cout << sum;
	return 0;
}