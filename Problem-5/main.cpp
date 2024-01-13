#include <iostream>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the smallest number evenly divisible by all numbers from 1 to n
int smallestMultiple(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int n = 20; // You can change this value to any positive integer
    std::cout << "The smallest positive number evenly divisible by all numbers from 1 to " << n << " is: "
              << smallestMultiple(n) << std::endl;

    return 0;
}
