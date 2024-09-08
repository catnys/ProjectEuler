# Project Euler - Problem 57

## `Square Root Convergents`

### Problem Statement

It is possible to show that the square root of two can be expressed as an infinite continued fraction:

√2 = 1 + 1/(2 + 1/(2 + 1/(2 + ...)))

By expanding this for the first few iterations, we get the following approximations:

1 + 1/2 = 3/2 = 1.5
1 + 1/(2 + 1/2) = 7/5 = 1.4
1 + 1/(2 + 1/(2 + 1/2)) = 17/12 = 1.41666...

The next three expansions are 41/29, 99/70, and 239/169, but the important observation is that in each iteration, the numerator and the denominator both increase.

In the first one-thousand expansions, how many fractions contain a numerator with more digits than the denominator?

### Instructions

1. Implement the expansion of the square root of 2 as a continued fraction.
2. For each expansion, compute the numerator and denominator.
3. Count how many of these fractions, in the first 1000 expansions, have numerators with more digits than the denominator.
4. Output the result.

### Example

After the third expansion, the fraction 17/12 has a numerator with more digits than the denominator.

### Discussion

This problem involves understanding continued fractions and their approximations. Efficient computation of fractions and digit counting is key to solving the problem. Python's arbitrary-precision integers are useful for this task, as the numerators and denominators can grow very large.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 57](https://projecteuler.net/problem=57).
