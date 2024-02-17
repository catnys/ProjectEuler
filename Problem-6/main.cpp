#include <iostream>

int main() {
    int n = 100;
    
    // Calculate the sum of the squares
    int sumOfSquares = 0;
    for (int i = 1; i <= n; ++i) {
        sumOfSquares += i * i;
    }

    // Calculate the square of the sum
    int sum = n * (n + 1) / 2; // Sum of the first n natural numbers
    int squareOfSum = sum * sum;

    // Calculate the difference
    int difference = squareOfSum - sumOfSquares;

    // Output the result
    std::cout << "The difference between the sum of the squares and the square of the sum for the first "
              << n << " natural numbers is: " << difference << std::endl;

    return 0;
}
