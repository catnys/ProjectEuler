# Project Euler - Problem 18: Maximum Path Sum I

## Introduction
This repository contains a solution for [Project Euler Problem 18](https://projecteuler.net/problem=18), titled "Maximum Path Sum I." The problem involves finding the maximum sum of a path from the top to the bottom of a given triangle of numbers. The objective is to determine the highest possible total by moving only to adjacent numbers on the row below.

## Example
Consider the following triangle of numbers:
```
3
7 4
2 4 6
8 5 9 3
```


The maximum path sum from the top to the bottom is 23 (3 + 7 + 4 + 9).

## Discussion
The solution to this problem involves dynamic programming, specifically working from the bottom of the triangle to the top. By summing each number with the maximum of the two possible adjacent numbers on the row below, the algorithm finds the optimal path sum efficiently.

## Notes
For a detailed explanation of the problem and additional test cases, please refer to [Project Euler Problem 18](https://projecteuler.net/problem=18) on the official Project Euler website.

