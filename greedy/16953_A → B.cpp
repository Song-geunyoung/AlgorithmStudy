#include <iostream>
using namespace std;

long long A, B;
int cnt = 0;

int main()
{
	cin >> A >> B;
	while (A != B)
	{
		if (B > 10 && B % 10 == 1)
		{
			B /= 10;
			cnt++;
		}
		else
		{
			if (B % 2 != 0)
			{
				cnt = -2;
				break;
			}
			B /= 2;
			cnt++;
		}
		if (A > B)
		{
			cnt = -2;
			break;
		}
	}
	cout << cnt + 1;
	return 0;
}