#include <iostream>
using namespace std;

long long n;
int t;

bool isPrime(long long a)
{
	if (a <= 1) return false;
	for (long long i = 2; i * i <= a; i++)
		if (a % i == 0)
			return false;
	return true;
}

void find_answer()
{
	while (true)
	{
		if (isPrime(n))
			break;
		n++;
	}
}

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		find_answer();
		cout << n << '\n';
	}
	return 0;
}