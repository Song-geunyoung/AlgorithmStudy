#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, input, evenCnt = 0, maxEvenCnt = 0;
vector<int> value;

void find_answer()
{
	int pos = 0;
	for (int i = 0; i < N; i++)
	{
		if (value[i] == 2)
		{
			evenCnt++;
			maxEvenCnt = max(maxEvenCnt, evenCnt);
		}
		else if (value[i] == 1 && K > 0)
		{
			value[i] = 0;
			K--;
		}
		else if (value[i] == 1 && K == 0)
		{
			value[i] = 0;
			for (int j = pos; j <= i; j++)
			{
				if (value[j] == 2)
					evenCnt--;
				else if (value[j] == 0)
				{
					pos = j + 1;
					break;
				}
			}
		}
	}
	cout << maxEvenCnt;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		//¦���� 2 Ȧ���� 1 �ֱ�, ������ ���� 0���� ��ü
		cin >> input;
		if (input % 2 == 0) value.push_back(2);
		else value.push_back(1);
	}
	find_answer();

	return 0;
}