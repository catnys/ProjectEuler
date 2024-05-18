# Project Euler - Problem 39

## `Integer Right Triangles`

### Problem Statement

If `p` is the perimeter of a right angle triangle with integral length sides, `(a, b, c)`, there are exactly three solutions for `p = 120`:

- (20, 48, 52)
- (24, 45, 51)
- (30, 40, 50)

For which value of `p <= 1000`, is the number of solutions maximized?

### Instructions

1. Iterate through possible perimeter values `p` from 1 to 1000.
2. For each `p`, find all sets of integers `(a, b, c)` that form a right triangle and have the perimeter `p`.
3. Count the number of solutions for each perimeter value.
4. Identify the perimeter value with the maximum number of solutions.
5. Output the result.

### Example

For the perimeter value `p = 120`, there are three solutions: `(20, 48, 52)`, `(24, 45, 51)`, and `(30, 40, 50)`.

### Discussion

This problem involves iterating through potential perimeters and using the properties of right triangles and Pythagorean triples to find valid combinations of sides `(a, b, c)`. Efficient iteration and checking methods are key to solving this problem within the given constraints.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 39](https://projecteuler.net/problem=39).
