#include <iostream>
#include <queue>

using namespace std;

void Josephus(int N, int K)
{
	queue<int> Q;
	for (int i = 0; i < N; i++)
		Q.push(i+1);
	
	cout << "<";
	while (!Q.empty())
	{
		for (int i = 1; i < K; i++)
		{
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front();
		if (Q.size() != 1)
			cout << ", ";
		else
			cout << ">";
		Q.pop();
	}
}

int main()
{
	int N; int K;
	cin >> N >> K;

	Josephus(N, K);

	return 0;
}