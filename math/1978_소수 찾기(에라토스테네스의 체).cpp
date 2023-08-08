#include <iostream>
#include <vector>
using namespace std;

int n, prime_count = 0;
vector<int> numbers;

bool is_Prime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    cin >> n;
    numbers.resize(n);

    for (int i = 0; i < n; i++) 
        cin >> numbers[i];

    for (int i = 0; i < n; i++)
        if (is_Prime(numbers[i]))
            prime_count++;

    cout << prime_count << '\n';

    return 0;
}
