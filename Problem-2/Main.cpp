#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSequence(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
}


int main() {
    const int limit = 4000000;
    int sum = 0;

    int prev = 1;
    int current = 1;

    while (current <= limit) {
        if (current % 2 == 0) {
            sum += current;
        }

        // Calculate the next Fibonacci number
        int next = prev + current;
        prev = current;
        current = next;
    }

    std::cout << "Sum of even-valued Fibonacci terms below four million: " << sum << std::endl;

    return 0;
}