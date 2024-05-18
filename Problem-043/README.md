# Project Euler - Problem 43

## `Sub-string Divisibility`

### Problem Statement

The number, 1406357289, is a 0 to 9 pandigital number because it is made up of each of the digits 0 to 9 in some order, but it also has a rather interesting sub-string divisibility property.

Let d1 be the 1st digit, d2 be the 2nd digit, and so on. In this way, we note the following:

- d2d3d4=406 is divisible by 2
- d3d4d5=063 is divisible by 3
- d4d5d6=635 is divisible by 5
- d5d6d7=357 is divisible by 7
- d6d7d8=572 is divisible by 11
- d7d8d9=728 is divisible by 13
- d8d9d10=289 is divisible by 17

Find the sum of all 0 to 9 pandigital numbers with this property.

### Instructions

1. Generate all pandigital numbers (0 to 9) of length 10.
2. Check if each pandigital number satisfies the given sub-string divisibility property.
3. Sum up the pandigital numbers that meet the criteria.
4. Output the result.

### Example

For the pandigital number 1406357289, it satisfies the sub-string divisibility property mentioned in the problem statement.

### Discussion

This problem involves generating pandigital numbers and checking if they satisfy certain divisibility properties. An efficient approach is needed to iterate through pandigital numbers and verify the divisibility conditions.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 43](https://projecteuler.net/problem=43).
