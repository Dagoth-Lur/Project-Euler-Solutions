#include <iostream>

int main() {
    int primeCount = 1;
    int currentNumber = 3;
    int lastPrime = 2;

    while (primeCount < 10001) {
        bool isPrime = true;
        for (int i = 3; i <= currentNumber / 2; i += 2) {
            if (currentNumber % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            lastPrime = currentNumber;
            primeCount++;
        }
        currentNumber += 2;
    }
    std::cout << "10001st Prime number: " << lastPrime << std::endl;
    return 0;
}
