#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int N; double W; int U; int V; int P; double leaf_num = 0;
vector<vector<double>> tree;

int main()
{
	cin >> N >> W;
	tree.resize(N + 1, vector<double>());
	for (int i = 0; i < N - 1; i++)
	{
		cin >> U >> V;
		tree[U].push_back(V);
		tree[V].push_back(U);
	}

	for (int i = 2; i < tree.size(); i++)
		if (tree[i].size() == 1)
			leaf_num++;

	cout << fixed << setprecision(10);
	if (N == 1)
		cout << W << '\n';
	else
		cout << W / leaf_num << '\n';

	return 0;
}

//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//int N; double W; int U; int V; int P; double leaf_num = 0;
//vector<vector<double>> tree;
//vector<bool> visited;
//
//void find_Ans(int current)
//{
//	visited[current] = true;
//	if (tree[current].size() != 1)
//		for (int NextNode : tree[current])
//		{
//			if (visited[NextNode] == false)
//				find_Ans(NextNode);
//		}
//	else
//		leaf_num++;
//}
//int main()
//{
//	cin >> N >> W;
//	tree.resize(N + 1, vector<double>());
//	visited.resize(N + 1, false);
//	for (int i = 0; i < N - 1; i++)
//	{
//		cin >> U >> V;
//		tree[U].push_back(V);
//		tree[V].push_back(U);
//	}
//	
//	visited[1] = true;
//	find_Ans(1);
//	cout << fixed << setprecision(10);
//	cout << W/leaf_num << '\n';
//
//	return 0;
//}