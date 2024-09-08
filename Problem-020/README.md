# Project Euler - Problem 20

## `Factorial Digit Sum`

### Problem Statement

n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800, and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

### Instructions

1. Compute the factorial of 100.
2. Extract the digits from the result and sum them.
3. Output the sum.

### Example

For 10!, the sum of the digits is 27. You need to compute the sum of the digits of 100!.

### Discussion

This problem involves calculating large factorials and manipulating the resulting digits. Python’s built-in arbitrary-precision arithmetic can handle the large number resulting from 100!, and extracting and summing the digits is straightforward.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 20](https://projecteuler.net/problem=20).
