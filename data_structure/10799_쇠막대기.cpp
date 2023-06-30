#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str; cin >> str;

	deque<char> dq;
	int count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (!dq.empty() && str[i-1] == '(' && str[i] == ')')
		{
			dq.pop_back();
			count += dq.size() - 1;
		}
		else if (str[i] == '(')
		{
			count++;
			dq.push_back(str[i]);
		}
		else if (str[i] == ')')
			dq.pop_back();
	}
	cout << count << endl;

	return 0;
}