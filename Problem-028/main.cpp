#include <iostream>
#include "NumberSpiralDiagonals.hpp"

long long sumOfDiagonals(int n) {
    long long sum = 1; // Start with the center value 1
    int currentNumber = 1;

    for (int layer = 2; layer <= n; layer += 2) {
        for (int corner = 0; corner < 4; ++corner) {
            currentNumber += layer;
            sum += currentNumber;
        }
    }

    return sum;
}

int main() {
    int n = 1001; // The problem specifies a 1001x1001 spiral
    long long result = sumOfDiagonals(n);
    std::cout << "The sum of the diagonals in a " << n << "x" << n << " spiral is: " << result << stdd::endl;
    return 0;
}
