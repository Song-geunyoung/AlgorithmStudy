#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int target;
priority_queue<int> pq;
queue<pair<int, int>> q;

void input() {
    while (!pq.empty()) pq.pop();
    while (!q.empty()) q.pop();
    int cnt, importance;
    cin >> cnt >> target;
    for (int i = 0; i < cnt; i++) {
        cin >> importance;
        q.push({ importance, i });
        pq.push(importance);
    }
}

void sol() {
    int ans = 1;
    while (!q.empty()) {
        if (q.front().first < pq.top()) {
            q.push(q.front());
            q.pop();
        }
        else {
            if (q.front().second == target) {
                cout << ans << endl;
                break;
            }
            else {
                q.pop();
                pq.pop();
                ans++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        input();
        sol();
    }
}

//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	int testcase;
//	int N; int M;
//	//first:인덱스, second:값
//	deque<pair<int, int>> dq;
//
//	cin >> testcase;
//
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < testcase; i++)
//	{
//		cin >> N >> M;
//		
//		//중요도 부여&출력
//		for (int i = 0; i < N; i++)
//		{
//			dq.push_back({ i, rand() % 9 + 1 });
//			cout << dq.back().second << " ";
//		}
//		cout << endl;
//
//		int count = 0;
//		pair<int, int> impt;
//
//		while (1)
//		{
//			//가장 중요도 높은 거 찾기
//			impt = dq.front();
//			for (int i = 0; i < N; i++)
//			{
//				if (impt.second >= dq.front().second)
//				{
//					dq.push_back(dq.front());
//					dq.pop_front();
//				}
//				else if (impt.second < dq.front().second)
//				{
//					impt = dq.front();
//					dq.push_back(dq.front());
//					dq.pop_front();
//				}
//			}
//
//			//가장 중요도 높은 거 pop하기
//			for (int i = 0; i < N; i++)
//			{
//				if (dq.front() == impt)
//				{
//					dq.pop_front();
//					count++;
//					break;
//				}
//				else
//				{
//					dq.push_back(dq.front());
//					dq.pop_front();
//				}
//			}
//			if (M == impt.first)
//			{
//				cout << count << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}