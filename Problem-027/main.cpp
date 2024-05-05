#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int maxPrimes = 0;
    int product = 0;
    for (int a = -999; a <= 999; a++) {
        for (int b = -1000; b <= 1000; b++) {
            int n = 0;
            while (isPrime(n * n + a * n + b)) {
                n++;
            }
            if (n > maxPrimes) {
                maxPrimes = n;
                product = a * b;
            }
        }
    }
    std::cout << "The product of the coefficients a and b is: " << product << std::endl;
    std::cout << "The maximum number of primes generated is: " << maxPrimes << std::endl;
    return 0;
}
