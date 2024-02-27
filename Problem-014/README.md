# Project Euler - Problem 14

## Longest Collatz Sequence

### Problem Statement

The following iterative sequence is defined for the set of positive integers:

![image](https://hackmd.io/_uploads/H1eTIninT.png)


> \[ n \rightarrow \frac{n}{2} \quad (\text{if } n \text{ is even}) \]
> \[ n \rightarrow 3n + 1 \quad (\text{if } n \text{ is odd}) \]

Using the rule above and starting with 13, we generate the following sequence:

![image](https://hackmd.io/_uploads/HyjsI2jhp.png)


It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proven yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

**Note:** Once the chain starts, the terms are allowed to go above one million.

### Instructions

1. Find the starting number under one million that produces the longest Collatz sequence.
2. Provide the solution without revealing the code implementation.
3. If you choose to share your solution, avoid posting the code on public forums or repositories.
4. Reflect on the approach you took to solve the problem.

### Discussion

This problem involves generating a Collatz sequence for each starting number and finding the one with the longest chain. Consider efficient ways to implement the sequence generation and track chain lengths.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 14](https://projecteuler.net/problem=14).
