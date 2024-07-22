#include <iostream>

// Function to calculate the sum of proper divisors of n
int sumOfDivisors(int n) {
    int sum = 1; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // If i*i == n, then i and n/i are the same, so only add once
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    return sum;
}

// Function to check if two numbers are amicable
bool areAmicable(int x, int y) {
    return sumOfDivisors(x) == y && sumOfDivisors(y) == x;
}

int main() {
    int sum = 0;

    for (int i = 2; i < 10000; ++i) {
        for (int j = i + 1; j < 10000; ++j) {
            if (areAmicable(i, j)) {
                sum += i + j; 
                break; 
            }
        }
    }

    std::cout << "Sum of all amicable numbers under 10000: " << sum << std::endl;
    return 0;
}
