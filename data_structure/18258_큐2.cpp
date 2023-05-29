#include <stdio.h>
#include <iostream>
#include <queue>
#pragma warning (disable:4996)

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	queue<int> que;
	int input;	cin >> input;

	for (int i=0; i<input; i++)
	{
		string command;
		cin >> command;
		if (command == "push")
		{
			int element;
			cin >> element;
			que.push(element);
		}
		else if (command == "pop")
			if (que.empty())
				cout << -1 << endl;
			else
			{
				cout << que.front() << endl;
				que.pop();
			}
		else if (command == "size")
			cout << que.size() << endl;
		else if (command == "empty")
			if (que.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		else if (command == "front")
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.front() << endl;
		else if (command == "back")
			if (que.empty())
				cout << -1 << endl;
			else
				cout << que.back() << endl;
	}
	return 0;
}