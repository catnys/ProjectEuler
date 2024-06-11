#ifndef CIRCULARPRIMES_HPP
#define CIRCULARPRIMES_HPP

#include <vector>

// Function to generate all prime numbers up to a certain limit using the Sieve of Eratosthenes.
void generatePrimes(int limit, std::vector<bool>& isPrime);

// Function to check if a number is a circular prime.
bool isCircularPrime(int num, const std::vector<bool>& isPrime);

// Function to count all circular primes up to a given limit.
int countCircularPrimes(int limit);

#endif
