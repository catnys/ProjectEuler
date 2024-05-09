# Project Euler Problem - 27
## `Quadratic Primes`

## Problem Statement
This program finds the coefficients `a` and `b` for the quadratic formula `n^2 + an + b` that produces the maximum number of consecutive primes, starting from `n = 0`. The coefficients range from `-1000` to `1000`.

## Solution Approach
- The solution includes a function `isPrime` to determine if a number is a prime.
- It then iterates through possible values of `a` and `b`, evaluating the count of consecutive primes produced by the quadratic formula.
- It keeps track of the maximum number of consecutive primes and the corresponding product of coefficients `a` and `b`.

## Output
- The program outputs the product of the coefficients `a` and `b` which produce the maximum number of consecutive prime numbers.
- It also prints the total number of consecutive primes produced by these coefficients.

## Build and Run
- Compile with a C++ compiler supporting C++11 or later.
- Run the resulting executable to see the results.
