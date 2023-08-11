#include <iostream>
using namespace std;

int N, ans = 0;

void find_answer(int n)
{
	ans++;
	int temp = (n % 10) * 10 + (((n / 10) + (n % 10)) % 10);
	if (N != temp)
		find_answer(temp);
}

int main()
{
	cin >> N;
	find_answer(N);
	cout << ans;

	return 0;
}