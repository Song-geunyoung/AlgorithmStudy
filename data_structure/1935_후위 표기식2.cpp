#include<bits/stdc++.h>

using namespace std;

int main()
{
	deque<double> dq;
	double arr[28];

	int N;
	string input;
	int num;

	cin >> N >> input;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i<input.length(); i++)
	{
		double temp1;
		double temp2;

		if (input[i] == '*')
		{
			temp1 = dq.back();
			dq.pop_back();
			temp2 = dq.back();
			dq.pop_back();
			dq.push_back(temp1 * temp2);
		}
		else if (input[i] == '+')
		{
			temp1 = dq.back();
			dq.pop_back();
			temp2 = dq.back();
			dq.pop_back();
			dq.push_back(temp1 + temp2);
		}
		else if (input[i] == '/')
		{
			temp1 = dq.back();
			dq.pop_back();
			temp2 = dq.back();
			dq.pop_back();
			dq.push_back(temp2 / temp1);
		}
		else if (input[i] == '-')
		{
			temp1 = dq.back();
			dq.pop_back();
			temp2 = dq.back();
			dq.pop_back();
			dq.push_back(temp2 - temp1);
		}
		else
		{
			for (int j = 0; j < N; j++)
				if (input[i] == j + 65)
				{
					dq.push_back(arr[j]);
					break;
				}
		}
	}

	cout.precision(2);
	cout << fixed << dq.front() << endl;

	return 0;
}