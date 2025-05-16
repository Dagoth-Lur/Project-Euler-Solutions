#include <iostream>

int main() {
    unsigned long long x = 100;

    unsigned long long sum = x * (x + 1) / 2;

    unsigned long long sumSquared = x * (x + 1) * (2 * x + 1) / 6;

    unsigned long long squaredSum = sum * sum;

    std::cout << (squaredSum - sumSquared) << std::endl;

    return 0;
}
