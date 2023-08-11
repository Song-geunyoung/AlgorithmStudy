#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

//�ּҰ������ ���ϴ� ���� "�� ���ǰ�/�ִ�����"
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