#include <iostream>
/* Largest Palindrome Product */

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int largestPalindromeProduct() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}

int main() {
    int result = largestPalindromeProduct();
    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << result << std::endl;

    return 0;
}
