#include <iostream>

int main() {
    unsigned int testCount;
    std::cin >> testCount;

    while (testCount--) {
        unsigned long long number;
        std::cin >> number;

        for (unsigned long long factor = 2; factor * factor <= number; ++factor) {
            while (number % factor == 0 && number != factor) {
                number /= factor;
            }
        }

        std::cout << number << std::endl;
    }

    return 0;
}
