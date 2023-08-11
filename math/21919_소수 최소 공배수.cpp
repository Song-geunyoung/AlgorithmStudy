#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> A;
vector<long long> primeArr;

long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
	return a * b / gcd(a, b);
}

bool isPrime(int a)
{
	if (a <= 1) return false;
	for (int i = 2; i * i <= a; i++)
		if (a % i == 0)
			return false;
	return true;
}

long long find_answer()
{
	for (int i = 0; i < N; i++)
	{
		if (isPrime(A[i]))
			primeArr.push_back(A[i]);
	}
	if (primeArr.empty())
		return -1;

	while (primeArr.size() != 1)
	{
		long long temp = lcm(primeArr[0], primeArr[1]);
		primeArr.erase(primeArr.begin(), primeArr.begin() + 2);
		primeArr.push_back(temp);
	}
	return primeArr[0];
}

int main()
{
	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	cout << find_answer();
	return 0;
}