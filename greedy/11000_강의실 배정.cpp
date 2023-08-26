#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N;
vector<pair<int, int>> timeArr;
priority_queue<int, vector<int>, greater<int>> Ans;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	timeArr.resize(N);

	for (int i = 0; i < N; i++)
		cin >> timeArr[i].first >> timeArr[i].second;
	sort(timeArr.begin(), timeArr.end());

    Ans.push(timeArr[0].second);
    for (int i = 1; i < timeArr.size(); i++) {
        if (timeArr[i].first >= Ans.top()) {
            Ans.pop();
            Ans.push(timeArr[i].second);
        }
        else {
            Ans.push(timeArr[i].second);
        }
    }
    cout << Ans.size();
	return 0;
}