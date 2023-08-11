#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, input;
vector<int> arr;
vector<int> ans;

void find_ans()
{
	sort(arr.begin(), arr.end());
	for (int i = 2; i <= arr.back(); i++)
		if (n == 2 && arr[0] % i == 0 && arr[1] % i == 0)
			ans.push_back(i);
		else if (arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0)
			ans.push_back(i);
}

int main()
{
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	find_ans();
	cout << 1 << '\n';
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << '\n';

	return 0;
}