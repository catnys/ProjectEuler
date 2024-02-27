#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

long long sum_of_primes_below_n(int n) {
    long long sum = 0;

    for (int i = 2; i < n; ++i) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int limit = 2000000;
    long long result = sum_of_primes_below_n(limit);

    cout << "The sum of all prime numbers below " << limit << " is: " << result << endl;

    return 0;
}
