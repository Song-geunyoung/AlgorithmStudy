#include <iostream>
#include <vector>
using namespace std;

int N, M, minPrime = -1, sumPrime = 0;

bool isPrime(int num)
{
	if (num <= 1)
		return false;
	for (int i = 2; i * i <= num; i++)
		if (num % i == 0)
			return false;
	return true;
}

int main()
{
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			if (minPrime < 0)
				minPrime = i;
			sumPrime += i;
		}
	}

	if (minPrime < 0)
	{
		cout << minPrime << '\n';
		return 0;
	}
	else
		cout << sumPrime << '\n' << minPrime << '\n';

	return 0;
}