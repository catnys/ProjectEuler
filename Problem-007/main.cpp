#include <iostream>

/*
In this version, the loop iterates from i = 2 to i <= number. 
However, keep in mind that this approach is less efficient for larger numbers, as it performs unnecessary iterations beyond the square root of the number. 
The square root optimization is a common technique to reduce the time complexity of the primality check. 
*/

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
    int count = 0;
    int number = 2;

    std::cout << "First 6 prime numbers:" << std::endl;

    while (count < 6) {
        if (isPrime(number)) {
            std::cout << number << " ";
            ++count;
        }
        ++number;
    }

    std::cout << std::endl;

    while (count < 1001) {
        if (isPrime(number)) {
            if(count == 1000)
                std::cout << "the 1001st prime number is " << number;
            ++count;
        }
        ++number;
    }



    return 0;
}
