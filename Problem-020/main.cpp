#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;

mp::cpp_int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int sumOfDigits(mp::cpp_int number) {
    int sum = 0;
    while (number != 0) {
        sum += static_cast<int>(number % 10);
        number /= 10;
    }
    return sum;
}

int main() {
    int num = 100;
  

    mp::cpp_int fact = factorial(num);
    std::cout << "Factorial of " << num << " is: " << fact << std::endl;

    int digitSum = sumOfDigits(fact);
    std::cout << "Sum of digits in " << num << "! is: " << digitSum << std::endl;

    return 0;
}
