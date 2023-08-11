#include <iostream>
#include <vector>
using namespace std;

int n, t, input;
long long ans = 0;
vector<int> arr;
vector<int> ansArr;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

void find_answer()
{
	for (int i = 0; i < arr.size() - 1; i++)
		for (int j = i + 1; j < arr.size(); j++)
			ansArr.push_back(gcd(arr[i], arr[j]));

	for (int element : ansArr)
		ans += element;
}

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			arr.push_back(input);
		}

		find_answer();
		cout << ans << '\n';

		arr.clear();
		ansArr.clear();
		ans = 0;
	}

	return 0;
}