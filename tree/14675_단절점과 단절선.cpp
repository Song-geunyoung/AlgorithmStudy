#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N; cin >> N;
	int a; int b;

	vector<vector<int>> edges(N+1, vector<int>());

	for (int i = 0; i < N - 1; i++)
	{
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}

	int Q; cin >> Q;
	int t; int k;
	for (int i = 0; i < Q; i++)
	{
		cin >> t  >> k;
		if (t == 1)
			if (edges[k].size() <= 1)
				cout << "no" << "\n";
			else
				cout << "yes" << "\n";
		else
			cout << "yes" << "\n";
	}
	return 0;
}