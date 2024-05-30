# Project Euler - Problem 60

## `Prime Pair Sets`

### Problem Statement

The primes 3, 7, 109, and 673 are quite remarkable. By taking any two primes and concatenating them in any order, the result will always be prime. For example, taking 7 and 109, both 7109 and 1097 are prime. The sum of these four primes, 792, represents the lowest sum for a set of four primes with this property.

Find the lowest sum for a set of five primes for which any two primes concatenate to produce another prime.

### Instructions

1. Generate prime numbers.
2. Create pairs of primes and check if both concatenations of the pair are prime.
3. Extend this process to find sets of five primes where any two primes concatenate to form another prime.
4. Calculate the sum of the set of five primes with the lowest sum.
5. Output the result.

### Example

For the set of primes {3, 7, 109, 673}:
- Concatenations: 37, 73, 7109, 1097, 3673, 6733 (all prime)
- Sum: 3 + 7 + 109 + 673 = 792

### Discussion

This problem involves generating prime numbers and checking concatenated pairs for primality. Efficient prime generation, concatenation, and primality testing are essential for solving this problem within reasonable time constraints.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 60](https://projecteuler.net/problem=60).
