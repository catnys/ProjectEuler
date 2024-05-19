# Project Euler - Problem 35

## `Circular Primes`

### Problem Statement

The number 197 is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?

### Instructions

1. Generate all prime numbers below one million.
2. For each prime number, generate all rotations of its digits.
3. Check if all rotations are prime.
4. Count the number of circular primes.
5. Output the result.

### Example

For the number 197:
- Rotations: 197, 971, 719 (all prime)
- Hence, 197 is a circular prime.

### Discussion

This problem involves generating prime numbers and checking their rotations for primality. Efficient prime generation, digit manipulation, and checking methods are key to solving this problem within the given constraints.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 35](https://projecteuler.net/problem=35).
