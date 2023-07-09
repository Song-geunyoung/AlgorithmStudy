#include <iostream>
#include <vector>
using namespace std;

vector<int> parent; // �θ� ��带 ����
vector<vector<int>> edges; // ���� ����

void recursive_DFS(int parent_node)
{
	for (int nextNode : edges[parent_node])
	{
		if (parent[nextNode] == -1)
		{
			parent[nextNode] = parent_node;
			recursive_DFS(nextNode);
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

	recursive_DFS(1);

	for (int i = 2; i <= N; i++)
		cout << parent[i] << '\n';

	return 0;
}