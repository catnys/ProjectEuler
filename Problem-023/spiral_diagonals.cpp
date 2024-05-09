#include "spiral_diagonals.h"

// Helper function to calculate the sum of diagonals in an n x n spiral
long long sumOfSpiralDiagonals(int n) {
    long long sum = 1; // Starting with the center number 1
    int currentNumber = 1;
    int increment = 2;

    // Each loop iteration represents adding the four corners of a layer of the spiral
    for (int layer = 1; layer <= (n - 1) / 2; ++layer) {
        for (int corner = 0; corner < 4; ++corner) {
            currentNumber += increment;
            sum += currentNumber;
        }
        increment += 2;
    }

    return sum;
}
