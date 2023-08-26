#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, cnt = 1; cin >> N;
	vector<pair<long long, long long>> time(N);
	for (int i = 0; i < N; i++)
		cin >> time[i].second >> time[i].first;
	sort(time.begin(), time.end());

	long long end = time[0].first;
	for (int i = 1; i < N; i++)
	{
		if (time[i].second >= end)
		{
			end = time[i].first;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}