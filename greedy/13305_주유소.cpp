#include <iostream>
#include <vector>
using namespace std;

int N; long long minPrice = 0, remainOil = 0;
vector<int> dis;
vector<int> price;

void find_minPrice()
{
	long long total_price = 0;
	long long distance = 0;
	int now_price = price[0];
	for (int i = 0; i < N-1; i++)
	{
		distance += dis[i];
		if (i == N - 2)
		{
			total_price += now_price * distance;
			break;
		}
		if (now_price > price[i + 1])
		{
			total_price += now_price * distance;
			now_price = price[i + 1];
			distance = 0;
		}
	}
	cout << total_price;
}

int main()
{
	cin >> N;
	dis.resize(N-1);
	price.resize(N);

	for (int i = 0; i < N-1; i++)
		cin >> dis[i];
	for (int i = 0; i < N; i++)
		cin >> price[i];

	find_minPrice();
	return 0;
}