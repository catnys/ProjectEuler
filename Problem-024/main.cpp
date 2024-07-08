#include <iostream>
#include <vector>

bool isValidNumber(const std::string& num) {
    // Check if the number ends in 00, 08, 16, 32, 64, or 128
    return (num.size() == 10 && ((num.substr(num.size()-2) == "00") || (num.substr(num.size()-2) == "08") ||
                                 (num.substr(num.size()-2) == "16") || (num.substr(num.size()-2) == "32") ||
                                 (num.substr(num.size()-2) == "64") || (num.substr(num.size()-2) == "128")));
}

std::string findSmallestDivisibleBy2048() {
    std::string digits = "0123456789";
    std::string result;
    for (int i = 0; i < 10; ++i) { // Try each ending digit combination
        for (int j = 0; j < 10; ++j) {
            if (i != j) { // Ensure the second digit is not the same as the first
                result += digits[i];
                result += digits[j];
                if (result.size() >= 2) { // Start checking from 2 digits
                    std::string temp = result + digits[0]; // Add the rest of the digits
                    if (isValidNumber(temp)) {
                        return temp;
                    }
                }
            }
        }
    }
    return ""; // Return empty string if no valid number found
}

int main() {
    std::string smallestNum = findSmallestDivisibleBy2048();
    std::cout << "The smallest number that can be formed by concatenating the numbers 0 through 9 exactly once in such a way that the resulting number is divisible by 2^11 (2048) is: " << smallestNum << std::endl;
    return 0;
}
