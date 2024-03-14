#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to convert a number less than 1000 to words
string convertLessThan1000(int number) {
    static const string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                                   "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    static const string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    string result;

    if (number >= 100) {
        result += ones[number / 100] + " hundred";
        number %= 100;
        if (number > 0) {
            result += " and ";
        }
    }

    if (number >= 20) {
        result += tens[number / 10];
        number %= 10;
        if (number > 0) {
            result += " ";
        }
    }

    result += ones[number];
    return result;
}

// Function to convert a number to words
string numberToWords(int number) {
    if (number == 0) {
        return "zero";
    }

    string result;

    if (number >= 1000000) {
        result += convertLessThan1000(number / 1000000) + " million";
        number %= 1000000;
        if (number > 0) {
            result += " ";
        }
    }

    if (number >= 1000) {
        result += convertLessThan1000(number / 1000) + " thousand";
        number %= 1000;
        if (number > 0) {
            result += " ";
        }
    }

    result += convertLessThan1000(number);
    return result;
}


/*
My approach to this problem is that breaking down each number into its constituent parts based on place value (e.g., hundreds, tens, units) and then converting those parts into words is a solid strategy. 
This allows you to handle cases like "twenty-one" or "nine hundred and ninety-nine" appropriately.

Please also note that by implementing a function that can convert numbers to words using this approach, 
you can easily iterate through the numbers from 1 to 1000, convert each one to words, and 
count the letters to find the solution to the problem. Remember to handle special cases like "and" in numbers like "one hundred and one."
*/

int main() {
    int totalLetters = 0;
    for (int i = 1; i <= 1000; ++i) {
        string word = numberToWords(i);
        cout << word << endl;
        for (char c : word) {
            if (c != ' ' && c != '-') {
                totalLetters++;
            }
        }
    }

    cout << "Total letters used: " << totalLetters << endl;

    return 0;
}
