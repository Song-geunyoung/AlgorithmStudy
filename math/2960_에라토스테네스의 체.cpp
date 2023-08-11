#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int N, K, ans, _count = 0;

void find_answer(vector<int> a)
{
	vector<int> temp;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] % a.front() == 0)
		{
			_count++;
			if (_count == K)
			{
				ans = a[i];
				return;
			}
		}
		else
			temp.push_back(a[i]);
	}
	find_answer(temp);
}

int main()
{
	cin >> N >> K;
	for (int i = 2; i <= N; i++)
		arr.push_back(i);

	find_answer(arr);
	cout << ans;

	return 0;
}