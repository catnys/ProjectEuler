# Project Euler - Problem 37

## `Truncatable Primes`

### Problem Statement

The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly, we can remove digits from right to left and remain prime: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

**NOTE:** 2, 3, 5, and 7 are not considered to be truncatable primes.

### Instructions

1. Generate prime numbers and check if they are truncatable from both left to right and right to left.
2. Identify and sum up the eleven truncatable primes.
3. Output the result.

### Example

For the prime number 3797:
- Truncating from left to right: 3797 -> 797 -> 97 -> 7 (all prime)
- Truncating from right to left: 3797 -> 379 -> 37 -> 3 (all prime)

### Discussion

This problem involves generating prime numbers and checking them for the truncatable property. Efficient prime generation and truncation checking are essential for solving this problem within reasonable time limits.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 37](https://projecteuler.net/problem=37).

