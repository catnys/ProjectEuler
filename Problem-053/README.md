# Project Euler - Problem 53

## `Combinatoric Selections`

### Problem Statement

There are exactly ten ways of selecting three from five, 12345:

- 123, 124, 125, 134, 135, 145, 234, 235, 245, and 345

In combinatorics, we use the notation, C(5, 3) = 10.

In general,
C(n, r) = n! / (r!(n-r)!)
where n! denotes n factorial.

It is not until n = 23 that a value exceeds one-million: C(23, 10) = 1144066.

How many, not necessarily distinct, values of C(n, r) for 1 <= n <= 100, are greater than one-million?

### Instructions

1. Iterate through values of n from 1 to 100.
2. For each n, iterate through values of r from 0 to n.
3. Calculate C(n, r) and check if it is greater than one-million.
4. Count the number of combinations that meet the criteria.
5. Output the result.

### Example

For n = 23 and r = 10:
C(23, 10) = 1144066 which is greater than one-million.

### Discussion

This problem involves calculating binomial coefficients and counting how many of them exceed a given threshold. Efficient computation and comparison of binomial coefficients are key to solving this problem within the given constraints.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 53](https://projecteuler.net/problem=53).
