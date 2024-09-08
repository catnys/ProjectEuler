
# Project Euler - Problem 56

## `Powerful digit sum`

### Problem Statement

A googol (10^100) is a massive number: one followed by one hundred zeros. 100^100 is almost unimaginably large. How powerful is the sum of the digits of such a number?

Considering natural numbers of the form a^b, where a, b < 100, what is the maximum digital sum?

### Instructions

1. Calculate the power of `a^b` for all integers `a` and `b` from 1 to 99.
2. For each result, compute the sum of its digits.
3. Identify the maximum digital sum from all the computed values.

### Example

For `a = 9` and `b = 95`, `9^95` has a digital sum of 972. This is one of the largest digit sums in the range.

### Discussion

This problem involves computing large powers and manipulating the digits of the resulting numbers. A direct approach using loops for `a` and `b`, combined with digit extraction techniques, will help solve the problem.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 56](https://projecteuler.net/problem=56).
