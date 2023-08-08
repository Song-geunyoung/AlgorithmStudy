#include <iostream>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> tree(10001);
vector<bool> visited(10001, false);
int n; int u; int v; int w;
int maxDist = 0; int farthestNode;

void DFS(int current, int dist)
{
	visited[current] = true;
	if (maxDist < dist)
	{
		farthestNode = current;
		maxDist = dist;
	}
	for (pair<int, int> NextNode : tree[current])
		if (!visited[NextNode.first])
			DFS(NextNode.first, dist + NextNode.second);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> u >> v >> w;
		tree[u].push_back({ v, w });
		tree[v].push_back({ u, w });
	}

	DFS(1, 0);

	visited.assign(10001, false);
	maxDist = 0;

	DFS(farthestNode, 0);

	cout << maxDist << '\n';

	return 0;
}