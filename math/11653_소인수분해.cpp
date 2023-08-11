#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int N;

void find_answer(int n)
{
	if (n != 0)
		for (int i = 2; i <= n; i++)
			if (n % i == 0)
			{
				arr.push_back(i);
				find_answer(n / i);
				break;
			}
}

int main()
{
	cin >> N;
	find_answer(N);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << '\n';

	return 0;
}