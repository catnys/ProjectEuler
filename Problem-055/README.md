# Project Euler - Problem 55

## `Lychrel Numbers`

### Problem Statement

If we take a number like 47, reverse its digits, and add the resulting numbers, we get:

47 + 74 = 121, which is a palindrome.

However, not all numbers produce palindromes so quickly. For example,

349 + 943 = 1292,
1292 + 2921 = 4213,
4213 + 3124 = 7337 (which is a palindrome).

Although no one has proven it yet, it is thought that some numbers, like 196, never produce a palindrome through this process. Such numbers are called Lychrel numbers. 

For the purpose of this problem, we shall assume that a number is Lychrel until proven otherwise. In addition, you are given that for any number below ten-thousand, it will either:

1. Become a palindrome in less than fifty iterations, or
2. Be proven to be a Lychrel number.

How many Lychrel numbers are there below ten-thousand?

### Instructions

1. Iterate through numbers from 1 to 9999.
2. For each number, perform the reverse and add process.
3. Check if a palindrome is produced within fifty iterations.
4. Count numbers that do not produce a palindrome within fifty iterations (Lychrel numbers).
5. Output the result.

### Example

For the number 47:
- 47 + 74 = 121 (a palindrome)

For the number 349:
- 349 + 943 = 1292
- 1292 + 2921 = 4213
- 4213 + 3124 = 7337 (a palindrome)

### Discussion

This problem involves iterative digit manipulation and checking for palindromic properties. Efficiently performing these operations and counting the numbers that do not meet the criteria within the iteration limit are essential for solving this problem.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 55](https://projecteuler.net/problem=55).
