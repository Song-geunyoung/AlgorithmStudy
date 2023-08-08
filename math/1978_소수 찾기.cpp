#include <iostream>

using namespace std;

int main()
{
	int N; int input;
	cin >> N;
	int prime_count = N;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (input == 1)
			prime_count--;
		for (int j = 2; j < input; j++)
		{
			if (input % j == 0)
			{
				prime_count--;
				break;
			}
		}
	}
	cout << prime_count << '\n';
	return 0;
}