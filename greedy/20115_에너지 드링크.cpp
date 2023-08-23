#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long double N, x;
vector<long double> drink;

int main()
{
	cin >> N;
	drink.resize(N);

	for (int i = 0; i < N; i++)
		cin >> drink[i];
	sort(drink.begin(), drink.end(), greater<long double>());

	for (long double i = N-1; i > 0; i--)
		drink.front() = drink.front() + drink[i] / 2;

	cout << drink.front();

	return 0;
}