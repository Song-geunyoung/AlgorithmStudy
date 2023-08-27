#include <iostream>
using namespace std;

int N, ans = 0;
int main()
{
	cin >> N;
	while (N >= 0)
	{
		if (N % 5 == 0)
		{
			cout << N / 5 + ans;
			return 0;
		}
		N -= 3;
		ans++;
	}
	cout << -1;
	return 0;
}