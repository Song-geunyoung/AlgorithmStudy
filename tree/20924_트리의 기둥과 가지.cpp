#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N; int R; int a; int b; int d;
int trunk_length = 0; int ans = 0;
vector<pair<int, int>> vec[200001];
vector<int> branch_length;

void trunk(int current, vector<bool> visited)
{
	if (vec[current].size() > 2)
		return;
	else
	{
		visited[current] = true;
		for (pair<int, int> Next : vec[current])
		{
			if (visited[Next.first] == false)
			{
				trunk_length += Next.second;
				trunk(Next.first, visited);
			}
		}
	}
}

void branch(int current, vector<bool> visited)
{
	for (pair<int, int> Next : vec[current])
	{
		visited[current] = true;
		if (visited[Next.first] == false)
		{
			branch_length.push_back(Next.second);
			branch(Next.first, visited);
		}
	}

	//리프노드일 때
	if (current != R && vec[current].size() == 1)
	{
		int temp = 0;
		for (int i = 0; i < branch_length.size(); i++)
			temp += branch_length[i];
		if (temp > ans)
			ans = temp;
	}
	if (!branch_length.empty())
		branch_length.pop_back();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> R;
	vector<bool> visited(N + 1, false);

	if (N == 1)
	{
		cout << 0 << " " << 0 << '\n';
		return 0;
	}

	for (int i = 0; i < N - 1; i++)
	{
		cin >> a >> b >> d;
		vec[a].push_back({ b, d });
		vec[b].push_back({ a, d });
	}

	trunk(R, visited);
	branch(R, visited);

	cout << trunk_length << " " << ans - trunk_length << '\n';

	return 0;
}