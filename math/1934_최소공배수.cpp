#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

//최소공배수를 구하는 공식 "두 수의곱/최대공약수"
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int T, A, B;
int main()
{
	cin >> T;
	while (T--)
	{
		cin >> A >> B;
		cout << lcm(A, B) << '\n';
	}

	return 0;
}