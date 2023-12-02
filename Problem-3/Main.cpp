#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; // Found a divisor, not a prime number
        }
    }

    return true; // No divisors found, it is a prime number
}

void printPrimeFactors(int targetNumber) {
    for (int i = 2; i <= targetNumber; ++i) {
        if (targetNumber % i == 0 && isPrime(i)) {
            std::cout << "Prime Factor: " << i << std::endl;
        }
    }
}

int main() {
    int targetNumber = 13195;

    // Check if the number itself is prime
    if (isPrime(targetNumber)) {
        std::cout << "The target number is prime." << std::endl;
    } else {
        printPrimeFactors(targetNumber);
    }

    return 0;
}
