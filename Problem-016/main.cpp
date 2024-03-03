#include <iostream>
#include <vector>

// Function to calculate the sum of digits of 2^exponent
int sumOfDigits(int exponent);

int main() {
    int exponent = 1000;

    // Call the function to calculate the sum of digits
    int result = sumOfDigits(exponent);

    // Output the result
    std::cout << "The sum of the digits of 2^" << exponent << " is: " << result << std::endl;

    return 0;
}

int sumOfDigits(int exponent) {
    // Calculate 2^exponent
    std::vector<int> digits;
    digits.push_back(1);

    for (int i = 0; i < exponent; ++i) {
        int carry = 0;
        for (int j = 0; j < digits.size(); ++j) {
            int product = 2 * digits[j] + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }

        while (carry != 0) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Calculate the sum of digits
    int sum = 0;
    for (int digit : digits) {
        sum += digit;
    }

    return sum;
}

