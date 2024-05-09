#include <iostream>
#include "spiral_diagonals.h"

int main() {
    int size = 1001; // The size of the grid
    long long result = sumOfSpiralDiagonals(size);
    std::cout << "The sum of the diagonals in a " << size << "x" << size
              << " spiral is: " << result << std::endl;
    return 0;
}
