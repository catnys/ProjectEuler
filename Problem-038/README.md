# Project Euler - Problem 38

## `Pandigital Multiples`

### Problem Statement

Take the number 192 and multiply it by each of 1, 2, and 3:

- 192 × 1 = 192
- 192 × 2 = 384
- 192 × 3 = 576

By concatenating these products, 192384576, we get a 1 to 9 pandigital number (containing each digit from 1 to 9 exactly once).

The same can be achieved by starting with 9 and multiplying by 1, 2, 3, 4, and 5, giving the pandigital 918273645, which is the concatenated product of 9 and (1, 2, 3, 4, 5).

What is the largest 1 to 9 pandigital 9-digit number that can be formed as the concatenated product of an integer with (1, 2, ..., n) where n > 1?

### Instructions

1. Iterate through possible base integers and values of `n` to form concatenated products.
2. Check if the resulting concatenated product is a 1 to 9 pandigital number.
3. Track the largest pandigital number found.
4. Output the result.

### Example

For the number 192 and multipliers 1, 2, and 3, the concatenated product is 192384576, which is a 1 to 9 pandigital number.

### Discussion

This problem involves generating concatenated products of integers with sequences of multipliers and checking for pandigital properties. Efficient string manipulation and checking methods are key to solving this problem within the given constraints.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 38](https://projecteuler.net/problem=38).
