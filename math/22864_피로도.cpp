#include <iostream>
#include <vector>
using namespace std;

// A쌓이는피로도 B처리량 C감소피로도 M 에너지바
int A, B, C, M, now = 0, working = 0;
vector<int> arr;

int find_answer()
{
	if (A > M)
		return 0;
	for (int i = 0; i < 24; i++)
	{
		//일 함
		if (now + A <= M)
		{
			now += A;
			working += B;
		}
		//쉼
		else
		{
			now -= C;
			if (now < 0)
				now = 0;
		}
	}
	return working;
}

int main()
{
	cin >> A >> B >> C >> M;
	cout << find_answer();

	return 0;
}