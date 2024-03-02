#include <iostream>

// Function to calculate the factorial of a number
double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate the combination (n choose k)
double calculateCombination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to calculate the number of lattice paths in a grid of size m x n
double calculateLatticePath(int m, int n) {
    // The number of lattice paths is given by (m + n) choose n
    return calculateCombination(m + n, n);
}

int main() {
    int gridSize = 20;
    double result = calculateLatticePath(gridSize, gridSize);
    long long longLongValue = static_cast<long long>(result);
    std::cout << "Number of lattice paths in a " << gridSize << "x" << gridSize << " grid: " << longLongValue << std::endl;

    return 0;
}
