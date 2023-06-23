#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N; cin >> N;
	int num;
	deque<pair<int, int>> dq; // 1:인덱스 2: 값

	for (int i = 1; i < N + 1; i++)
	{
		cin >> num;
		dq.push_back({ i, num});
	}

	while (!dq.empty())
	{
		int temp = dq.front().second;
		cout << dq.front().first << " ";
		dq.pop_front();

		if (dq.size() == 1) // 1개 남았을 때
		{
			cout << dq.front().first << endl;
			dq.pop_front();
		}
		if (temp > 0) // 양수일 때
		{
			for (int i = 0; i < abs(temp) - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else // 음수일 때
		{
			for (int i = 0; i < abs(temp); i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	return 0;
}