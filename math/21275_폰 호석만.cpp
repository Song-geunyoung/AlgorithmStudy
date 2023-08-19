#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long X;
int A, B, _count = 0;
string input1, input2;
vector<long long> vec1(37);
vector<long long> vec2(37);

//a´Â 97
int getValue(char input)
{
	if (input <= '9')
		return input - '0';
	else
		return input - 87;
}

void find_answer()
{
	for (int base = 2; base <= 36; base++)
	{
		long long input1_sum = 0, input2_sum = 0;

		for (int i = 0; i < input1.size(); i++)
			if (getValue(input1[i]) >= base)
				input1_sum = -1;
			else
				input1_sum += getValue(input1[i]) * pow(base, input1.size() - i - 1);

		for (int i = 0; i < input2.size(); i++)
			if (getValue(input2[i]) >= base)
				input2_sum = -1;
			else
				input2_sum += getValue(input2[i]) * pow(base, input2.size() - i - 1);

		vec1[base] = input1_sum;
		vec2[base] = input2_sum;
	}
	for (int i = 2; i <= 36; i++)
		for (int j = 2; j <= 36; j++)
			if (vec1[i] != -1 && vec1[i] == vec2[j] && i != j)
			{
				A = i;
				B = j;
				X = vec1[i];
				_count++;
			}
	if (_count == 0)
		cout << "Impossible";
	else if (_count == 1)
		cout << X << " " << A << " " << B;
	else
		cout << "Multiple";
}

int main()
{
	cin >> input1 >> input2;
	find_answer();

	return 0;
}