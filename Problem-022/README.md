
# Project Euler - Problem 22

## `Names Scores`

### Problem Statement

Using a 46K text file containing over five-thousand first names, begin by sorting the names into alphabetical order. Then, calculate the alphabetical value for each name by summing the alphabetical positions of its letters (A = 1, B = 2, ..., Z = 26). Multiply this value by the name's position in the sorted list to obtain a name score.

For example, when the list is sorted alphabetically, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?

### Instructions

1. Load the text file containing the list of names.
2. Sort the names alphabetically.
3. For each name, calculate its alphabetical value and multiply it by its position in the sorted list.
4. Sum the scores of all names and output the result.

### Example

For the name COLIN, the alphabetical value is 53, and its position in the list is 938, resulting in a score of 49714.

### Discussion

This problem involves sorting, character manipulation, and indexing. Efficient handling of the file, calculating alphabetical values, and keeping track of positions will lead to the solution. Python's string and file handling capabilities make it straightforward to compute the required result.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 22](https://projecteuler.net/problem=22).
