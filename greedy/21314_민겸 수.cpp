#include <iostream>

using namespace std;

string input, maxAns = "", minAns = "";
int len = 0;

int main()
{
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'M')
		{
			len++;
			if (i == input.size() - 1)
			{
				for (int j = 0; j < len; j++)
					maxAns += '1';
			}
		}
		else
		{
			maxAns += '5';
			for (int j = 0; j < len; j++)
				maxAns += '0';
			len = 0;
		}
	}
	len = 0;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == 'M')
		{
			len++;
			if (i == input.size() - 1)
			{
				minAns += '1';
				for (int j = 0; j < len - 1; j++)
					minAns += '0';
			}
		}
		else
		{
			if (len > 0)
				minAns += '1';
			for (int j = 0; j < len - 1; j++)
				minAns += '0';
			minAns += '5';
			len = 0;
		}
	}

	cout << maxAns << '\n' << minAns;
	return 0;
}