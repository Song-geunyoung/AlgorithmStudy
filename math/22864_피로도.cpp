#include <iostream>
#include <vector>
using namespace std;

// A���̴��Ƿε� Bó���� C�����Ƿε� M ��������
int A, B, C, M, now = 0, working = 0;
vector<int> arr;

int find_answer()
{
	if (A > M)
		return 0;
	for (int i = 0; i < 24; i++)
	{
		//�� ��
		if (now + A <= M)
		{
			now += A;
			working += B;
		}
		//��
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