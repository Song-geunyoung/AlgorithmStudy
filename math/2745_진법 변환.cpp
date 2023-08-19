#include <iostream>
#include <cmath>
using namespace std;

int getValue(char x)
{
    if ('0' <= x && x <= '9') return x - '0';
    return x - 55;
}

int main() {
    string s; cin >> s;
    int base; cin >> base;
    int answer = 0;

    for (int i = 0; i < s.size(); i++)
        answer += getValue(s[i]) * pow(base, s.size() - i - 1);

    cout << answer;

    return 0;
}