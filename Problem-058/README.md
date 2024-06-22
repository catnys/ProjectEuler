# Project Euler - Problem 58

## `Spiral Primes`

### Problem Statement

Starting with 1 and spiralling anticlockwise in the following way, a square spiral with side length 7 is formed.

37 36 35 34 33 32 31
38 17 16 15 14 13 30
39 18  5  4  3 12 29
40 19  6  1  2 11 28
41 20  7  8  9 10 27
42 21 22 23 24 25 26
43 44 45 46 47 48 49

It is interesting to note that the odd squares lie along the bottom right diagonal, but what is more interesting is that 8 out of the 13 numbers lying along both diagonals are prime; that is, a ratio of 8/13 ≈ 62%.

If one complete new layer is wrapped around the spiral above, a square spiral with side length 9 will be formed. If this process is continued, what is the side length of the square spiral for which the ratio of primes along both diagonals first falls below 10%?

### Instructions

1. Identify the side length of the square spiral where the ratio of primes along both diagonals falls below 10%.
2. Provide the solution without revealing the code implementation.
3. If you choose to share your solution, avoid posting the code on public forums or repositories.
4. Reflect on the approach you took to solve the problem.

### Example

The square spiral with side length 7:
- Diagonal numbers: 37, 31, 43, 49, etc.
- Number of primes in the diagonal: 8

### Discussion

This problem challenges you to generate a square spiral and identify prime numbers in the diagonal. Consider how to efficiently track the diagonals and evaluate their primality as the spiral grows.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 58](https://projecteuler.net/problem=58).
