#include <iostream>
using namespace std;

int n;

int main()
{
	int _count = 0;
	cin >> n;

	while (n >= 10)
	{
		n -= 5;
		_count++;
	}

	if (n >= 5 && n %2 != 0)
	{
		n -= 5;
		_count++;
	}
	if (n % 2 == 0)
		while (n != 0)
		{
			n -= 2;
			_count++;
		}
	else
		_count = -1;

	cout << _count;
	return 0;
}