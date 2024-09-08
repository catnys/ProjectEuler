#include <iostream>
#include <cmath>

int countPowerfulDigitCounts() {
    int count = 0;

    // Loop over base numbers (from 1 to 9)
    for (int base = 1; base < 10; ++base) {
        int n = 1;  // Start from power 1
        while (true) {
            // Calculate the result of base^n
            double result = pow(base, n);
            
            // Count the number of digits in the result
            int numDigits = floor(log10(result)) + 1;
            
            // If the number of digits is equal to the power n, it's a valid number
            if (numDigits == n) {
                ++count;
            } else if (numDigits < n) {
                // Once numDigits is less than n, no larger powers will work for this base
                break;
            }
            ++n;
        }
    }

    return count;
}

int main() {
    int result = countPowerfulDigitCounts();
    std::cout << "Total count of powerful digit counts: " << result << std::endl;
    return 0;
}
