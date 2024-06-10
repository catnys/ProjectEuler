#include <iostream>
#include <numeric>  // For std::gcd

int main() {
    int result_num = 1;  // Product of numerators
    int result_den = 1;  // Product of denominators

    for (int num = 10; num <= 99; ++num) {
        for (int den = num + 1; den <= 99; ++den) {
            int num_ten = num / 10;    // Tens digit of numerator
            int num_one = num % 10;    // Units digit of numerator
            int den_ten = den / 10;    // Tens digit of denominator
            int den_one = den % 10;    // Units digit of denominator

            if (num_one == 0 && den_one == 0) continue; // Ignore trivial cases

            // Check for non-trivial cases where the digits cancel
            if (num_one == den_ten && num_ten * den == num * den_one) {
                result_num *= num;
                result_den *= den;
            } else if (num_ten == den_one && num_one * den == num * den_ten) {
                result_num *= num;
                result_den *= den;
            }
        }
    }

    // Reduce the fraction by their greatest common divisor
    int gcd = std::gcd(result_num, result_den);
    result_den /= gcd;

    std::cout << "The denominator of the product of these fractions when reduced is: " << result_den << std::endl;

    return 0;
}
