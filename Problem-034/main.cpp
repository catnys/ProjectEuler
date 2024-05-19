#include <iostream>
#include <vector>

// Factorial calculation method
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Method to check if a number is a curious number
bool isCuriousNumber(int num, const std::vector<int>& factorials) {
    int sum = 0;
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorials[digit];
        temp /= 10;
    }
    return sum == num;
}

int main() {
    // Precompute the factorials of digits 0-9
    std::vector<int> factorials(10);
    for (int i = 0; i <= 9; ++i) {
        factorials[i] = factorial(i);
    }

    // Upper limit estimation: 7 * 9! = 2540160, since 7 * 9! > 9999999
    int upperLimit = 7 * factorials[9];

    int sumOfCuriousNumbers = 0;
    for (int i = 10; i < upperLimit; ++i) {
        if (isCuriousNumber(i, factorials)) {
            sumOfCuriousNumbers += i;
        }
    }

    std::cout << "Sum of all curious numbers: " << sumOfCuriousNumbers << std::endl;
    return 0;
}
