#include <iostream>
#include <vector>

using namespace std;

int N; int input; int deleteNode; int root; 	int leaf_count = 0;
vector<vector<int>> edges(50, vector<int>());
vector<int> parentArr;

void DFS(int current)
{
	for (int nextNode : edges[current])
		if (nextNode == deleteNode) continue;
		else if (edges[nextNode].size() == 0) { leaf_count++; }
		else { DFS(nextNode); }
}

int return_leaf()
{
	if (deleteNode == root)
		return leaf_count;
	DFS(root);

	return leaf_count;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (input == -1)
			root = i;
		else
			edges[input].push_back(i);
		parentArr.push_back(input);
	}
	cin >> deleteNode;
	cout << return_leaf() << '\n';

	return 0;
}