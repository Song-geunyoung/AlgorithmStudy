#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> parent; // 부모 노드를 저장
vector<vector<int>> edges; // 간선 정보

void BFS(int startNode)
{
	queue<int> q;
	q.push(startNode);

	while (!q.empty())
	{
		int curNode = q.front();
		q.pop();

		for (int nextNode : edges[curNode])
		{
			if (parent[nextNode] == -1)
			{
				parent[nextNode] = curNode;
				q.push(nextNode);
			}
		}
	}
}

int main()
{
	int N; cin >> N;
	parent.resize(N + 1, -1);
	edges.resize(N + 1, vector<int>());

	for (int i = 0; i < N - 1; i++)
	{
		int u; int v;
		cin >> u >> v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}

	BFS(1);

	for (int i = 2; i <= N; i++)
		cout << parent[i] << '\n';

	return 0;
}