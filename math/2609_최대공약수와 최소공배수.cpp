#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//최소공배수를 구하는 공식 "두 수의 곱 / 최대공약수"
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << '\n' << lcm(num1, num2) << '\n';

    return 0;
}