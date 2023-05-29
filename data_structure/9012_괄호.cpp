#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

string is_VPS(string input)
{
	stack<int> stack;

	for (int i = 0; i < input.length(); i++)
		if (input[i] == '(')
			stack.push(input[i]);
		else
		{
			if (stack.empty() == true)
				return "NO";
			stack.pop();
		}

	if (stack.empty() == true)
		return "YES";
	else
		return "NO";
}

int main()
{
	int T;
	cin >> T;
	string input;

	for (int i = 0; i < T; i++)
	{
		cin >> input;
		cout << is_VPS(input) << endl;
	}
	return 0;
}