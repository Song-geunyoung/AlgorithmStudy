#include <iostream>
#include <vector>
using namespace std;

vector<int> A;
double N, X, _count = 0, sum = 0, average;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

void find_answer()
{
	for (int i = 0; i < A.size(); i++)
	{
		if (gcd(X, A[i]) == 1)
		{
			_count++;
			sum += A[i];
		}
	}
	average = sum / _count;
}

int main()
{
	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> X;

	find_answer();
	cout << average;

	return 0;
}