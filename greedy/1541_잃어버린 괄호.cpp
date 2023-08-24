#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> numArr;
vector<char> Operator;
string input;

void getNumOper()
{
	string temp;
	for (int i = 0; i < input.size(); i++)
	{
		if (i == input.size() - 1)
		{
			numArr.push_back(stoi(temp + input[i]));
			temp.clear();
		}
		if (input[i] == '-' || input[i] == '+')
		{
			Operator.push_back(input[i]);
			numArr.push_back(stoi(temp));
			temp.clear();
		}
		else
			temp.push_back(input[i]);
	}
}

void find_minAns()
{
	getNumOper();
	bool isMinus = false;
	for (int i = 0; i < Operator.size(); i++)
		if (Operator[i] == '-')
		{
			for (int j = i; j < Operator.size(); j++)
				Operator[j] = '-';
			break;
		}

	int ans = numArr.front();
	for (int i = 0; i < Operator.size(); i++)
		if (Operator[i] == '+')
			ans += numArr[i + 1];
		else
			ans -= numArr[i + 1];
	cout << ans;
}

int main()
{
	cin >> input;
	find_minAns();

	return 0;
}