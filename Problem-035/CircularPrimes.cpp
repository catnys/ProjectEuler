#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>

#include "CircularPrimes.hpp"

void generatePrimes(int limit, std::vector<bool>& isPrime) {
    isPrime.assign(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }
}

bool isCircularPrime(int num, const std::vector<bool>& isPrime) {
    std::string numStr = std::to_string(num);
    int count = numStr.size();
    for (int i = 0; i < count; ++i) {
        // Rotate string
        std::rotate(numStr.begin(), numStr.begin() + 1, numStr.end());
        int rotatedNum = std::stoi(numStr);
        if (!isPrime[rotatedNum]) return false;
    }
    return true;
}

int countCircularPrimes(int limit) {
    std::vector<bool> isPrime;
    generatePrimes(limit, isPrime);
    int circularPrimeCount = 0;

    for (int num = 2; num <= limit; ++num) {
        if (isPrime[num] && isCircularPrime(num, isPrime)) {
            ++circularPrimeCount;
        }
    }

    return circularPrimeCount;
}

int main() {
    int limit = 1000000;
    int result = countCircularPrimes(limit);
    std::cout << "Number of circular primes below " << limit << ": " << result << std::endl;
    return 0;
}
