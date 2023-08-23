#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, A, _count = 0;
vector<int> capacity;
int main()
{
	cin >> N >> K;
	capacity.resize(N);
	for (int i = 0; i < N; i++)
		cin >> capacity[N - i - 1];
	while (K)
	{
		while (K >= capacity[0])
		{
			K -= capacity[0];
			_count++;
		}
		if (K < capacity[0])
			capacity.erase(capacity.begin());
	}
	cout << _count;
	return 0;
}