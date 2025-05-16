#include <iostream>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int result = 1;
    for (int i = 2; i <= 20; ++i)
        result = lcm(result, i);
    std::cout << result << '\n';
}
