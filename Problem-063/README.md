# Project Euler - Problem 63

## `Powerful Digit Counts`

### Problem Statement

The 5-digit number, 16807=5^5, is also a fifth power. Similarly, the 9-digit number, 134217728=8^9, is a ninth power.

Find how many n-digit positive integers exist that are also an nth power.

### Instructions

1. Calculate n-digit numbers that are also the nth power of some base.
2. Loop through potential base numbers and their powers until the number of digits in the result differs from the power.
3. Count these occurrences.
4. Output the total count.

### Example

Calculate and count the numbers like 16807 (which is 5^5 and a 5-digit number) to find all such n-digit integers which are also nth powers.

### Discussion

This problem challenges the understanding of number properties, particularly the relationship between the number of digits of a power and the exponent itself. The key is recognizing when to stop the calculations as the numbers grow.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 63](https://projecteuler.net/problem=63).
