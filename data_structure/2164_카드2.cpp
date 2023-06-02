#include<bits/stdc++.h>

using namespace std;

void card2(int N)
{
	queue<int> Q;
	for (int i = 1; i <= N; i++)
		Q.push(i);

	while (1)
	{
		Q.pop();
		Q.push(Q.front());
		Q.pop();
		if (Q.size() == 1)
		{
			cout << Q.front();
			break;
		}
	}
}

int main()
{
	int N;
	cin >> N;

	card2(N);

	return 0;
}