#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
vector<int> vec;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    if (K == N) {
        cout << "0\n";
        return 0;
    }
    vec.resize(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];

    vector<int> differences;
    for (int i = 0; i < N - 1; i++)
        differences.push_back(vec[i + 1] - vec[i]);

    sort(differences.begin(), differences.end());

    int answer = 0;
    for (int i = 0; i < N - K; i++)
        answer += differences[i];

    cout << answer << '\n';
}