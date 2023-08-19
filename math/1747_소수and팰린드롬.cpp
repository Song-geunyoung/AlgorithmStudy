#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int N;

bool isPrime(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}

bool isPalindrome(int n)
{
	string str1 = to_string(n);
	string str2 = to_string(n);
	for(int i = 0; i<str1.size(); i++)
		str2[str1.size() - i - 1] = str1[i];
	if (str1 == str2)
		return true;
	return false;
}

void find_answer()
{
	while (true)
	{
		if (isPrime(N) && isPalindrome(N))
			break;
		N++;
	}
}

int main()
{
	cin >> N;
	find_answer();
	cout << N;

	return 0;
}