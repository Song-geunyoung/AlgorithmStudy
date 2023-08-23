#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, weight;
int ans = 0;

int main()
{
	cin >> N;
	vector <int> vec(N);
	for(int i=0; i<N; i++)
		cin >> vec[i];
	sort(vec.begin(), vec.end());
	ans = vec[0] * N;
	for (int i = 1; i < N; i++)
		ans = max(ans, vec[i] * (N - i));
	cout << ans;

	return 0;
}