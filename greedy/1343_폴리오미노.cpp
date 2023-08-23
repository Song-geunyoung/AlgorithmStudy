#include <iostream>
#include <string>
#include <vector>
using namespace std;

string input;
string ans;

void change(int num)
{
	while (num >= 4)
	{
		num -= 4;
		ans.append("AAAA");
	}
	if (num >= 2)
	{
		num -= 2;
		ans.append("BB");
	}
	if (num == 1)
	{
		cout << -1;
		exit(0);
	}
}

int main()
{
	cin >> input;
	int _count = 0;
	for (char a : input)
	{
		if (a == 'X')
			_count++;
		else
		{
			change(_count);
			ans.push_back(a);
			_count = 0;
		}
	}
	change(_count);
	cout << ans;

	return 0;
}