#include <iostream>


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number; ++i) {
        if (number % i == 0 && i != number) {
            return false;
        }
    }

    return true;
}

int main() {
    int number = 0;
    int sum = 0;

    while (number < 2000000) {
        if (isPrime(number)) {
            //std::cout << number << " ";
            sum += number;
        }
        ++number;
    }

    std::cout << "Sum of below 2.000.000 prime numbers: " << sum << std::endl;


    return 0;
}
