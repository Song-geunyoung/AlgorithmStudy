#include <iostream>
using namespace std;

int N, Rcount = 0, Bcount = 0;
string input;
char before;

int main()
{
	cin >> N >> input;
	before = input.front();
	for (int i = 1; i < N; i++)
		if (before == input[i])
			input[i] = -1;
		else
			before = input[i];
	
	for (int i = 0; i < N; i++)
		if (input[i] == 'R')
			Rcount++;
		else if (input[i] == 'B')
			Bcount++;

	if (Rcount >= Bcount)
		cout << 1 + Bcount;
	else
		cout << 1 + Rcount;
}