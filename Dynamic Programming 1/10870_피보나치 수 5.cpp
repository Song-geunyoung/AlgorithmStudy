#include <iostream>
using namespace std;

int N;
int main()
{
	cin >> N;
	int a = 0, b = 1, temp;
	while (N--)
	{
		temp = b;
		b += a;
		a = temp;
	}
	cout << a;

	return 0;
}