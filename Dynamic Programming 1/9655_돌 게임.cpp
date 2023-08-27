#include <iostream>
using namespace std;

int N;
bool isSK = true;

int main()
{
	cin >> N;
	if (N % 2 == 1)
	{
		cout << "SK";
		return 0;
	}
	else
	{
		cout << "CY";
		return 0;
	}
}