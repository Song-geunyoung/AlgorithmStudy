#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N; long long t;
vector<long long> vec;
vector<long long> t_arr;

int main()
{
	cin >> N;
	vec.resize(N);
	for (int i = 0; i < N; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	if (N % 2 == 1)
	{
		t_arr.push_back(vec.back());
		for (int i = 0; i < N / 2; i++)
			t_arr.push_back(vec[i] + vec[N - 2 - i]);
	}
	else
	{
		for (int i = 0; i < N / 2; i++)
			t_arr.push_back(vec[i] + vec[N - 1 - i]);
	}
	sort(t_arr.begin(), t_arr.end());
	cout << t_arr.back();

	return 0;
}