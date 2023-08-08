#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int T; int N; int A; int B; int input1; int input2; int root; int commonAncestor;

vector<vector<int>> tree(10001, vector<int>());
vector<int> visited(10001, false);
vector<int> find_root(10001, -1);

deque<int> dq;
deque<int> save_dq1;
deque<int> save_dq2;
/*
8 4 6 15
8 4 10 11

일단 루트노드부터 구하기.
DFS로 순회하다가 해당 노드를 발견하면 스탑(과정을 모두 dequeue에 저장)
queue 두 개에 각자 넣어서 pop_front하다가 front가 not equal일 때*/

void DFS(int current)
{
	visited[current] = true;
	dq.push_back(current);
	for (int NextNode : tree[current])
	{
		if (!visited[NextNode])
			DFS(NextNode);
	}
	if (current == input1)
		save_dq1 = dq;
	else if (current == input2)
		save_dq2 = dq;

	dq.pop_back();
}

void find_commonAncestor()
{
	int temp=0;
	while (1)
	{
		if (!save_dq1.empty() && !save_dq2.empty() && save_dq1.front() == save_dq2.front())
		{
			temp = save_dq1.front();
			save_dq1.pop_front();
			save_dq2.pop_front();
		}
		else
		{
			commonAncestor = temp;
			break;
		}
	}
}

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		for (int j = 0; j < N - 1; j++)
		{
			cin >> A >> B;
			find_root[B] = true;
			tree[A].push_back(B);
			tree[B].push_back(A);
		}
		for (int i = 1; i < N + 1; i++)
		{
			if (find_root[i] == -1)
				root = i;
		}

		cin >> input1 >> input2;
		DFS(root);
		find_commonAncestor();
		cout << commonAncestor << '\n';

		tree.assign(10001, vector<int>());
		visited.assign(10001, false);
		find_root.assign(10001, -1);
		dq.clear();
		save_dq1.clear();
		save_dq2.clear();
	}

	return 0;
}