#include <iostream>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

/*
���� ��ȸ�̰� �ش� ��������Ʈ���� ���̸� �� �� Ʈ���� BFS�� ���
order 3
temp 3
���̸� �ȴ�. 3
6�� 1�� �θ��̴� ������
4�� 6�� right �ڽ��̴�.
*/

vector<vector<int>> cbt;

void find_cbt(vector<int> order, int depth)
{
	cbt[1].push_back(order[order.size() / 2]);
	while (order.size() != 1)
	{
		vector<int> temp = order;
		order.clear();
		for (int i = 0; i < temp.size(); i += 2)
			cbt[depth].push_back(temp[i]);
		for (int i = 1; i < temp.size(); i += 2)
			order.push_back(temp[i]);
		depth--;
	}
}

int main()
{
	vector<int> order;
	int K; cin >> K;
	int input;

	for (int i = 0; i < pow(2, K) - 1; i++)
	{
		cin >> input;
		order.push_back(input);
	}

	cbt.resize(K + 1, vector<int>());
	find_cbt(order, K);

	for (int i = 1; i < cbt.size(); i++)
	{
		for (int j = 0; j < cbt[i].size(); j++)
			cout << cbt[i][j] << " ";
		cout << '\n';
	}

	return 0;
}