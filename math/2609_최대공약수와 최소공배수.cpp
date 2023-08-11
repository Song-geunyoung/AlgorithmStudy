#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//�ּҰ������ ���ϴ� ���� "�� ���� �� / �ִ�����"
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << '\n' << lcm(num1, num2) << '\n';

    return 0;
}