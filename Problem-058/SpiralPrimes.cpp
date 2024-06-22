#include "SpiralPrimes.hpp"
#include <iostream>
#include <cmath>

// Helper function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number % 2 == 0 && number != 2) return false;
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

// Main function to find the required side length
int findSideLength() {
    int totalDiagonal = 1; // Starts with the center 1
    int primeCount = 0;   // Number of primes found on the diagonals
    int sideLength = 1;

    for (int n = 3; ; n += 2) { // Spiral side lengths: 3, 5, 7, ...
        int cornerValue = 0;
        int primesInThisLayer = 0;

        // Calculate the values at the four corners
        for (int corner = 0; corner < 4; ++corner) {
            cornerValue = n * n - (n - 1) * corner;
            if (isPrime(cornerValue)) {
                primesInThisLayer++;
            }
        }

        primeCount += primesInThisLayer;
        totalDiagonal += 4; // Each layer adds four more numbers to the diagonals

        // Check the prime ratio
        if (n > 1 && (primeCount * 100.0 / totalDiagonal) < 10) {
            sideLength = n;
            break;
        }
    }

    return sideLength;
}

int main() {
    int result = findSideLength();
    std::cout << "Side length for which the prime ratio falls below 10%: " << result << std::endl;
    return 0;
}
