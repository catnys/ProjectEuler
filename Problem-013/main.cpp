#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Function to add two large numbers represented as strings
string addLargeNumbers(const string& num1, const string& num2) {
    string result = "";
    int carry = 0;

    int len1 = num1.length();
    int len2 = num2.length();
    int i = len1 - 1, j = len2 - 1;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        result = char(sum % 10 + '0') + result;

        i--;
        j--;
    }

    return result;
}

int main() {
    // Read the numbers from the file
    ifstream file("numbers.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    vector<string> numbers;
    string line;
    while (getline(file, line)) {
        numbers.push_back(line);
    }

    file.close();

    // Sum the numbers
    string sum = "0";
    for (const string& num : numbers) {
        // Add the first 15 digits to avoid overflow
        sum = addLargeNumbers(sum, num.substr(0, 15));
    }

    // Extract the first ten digits of the sum
    string firstTenDigits = sum.substr(0, 10);

    cout << "The first ten digits of the sum are: " << firstTenDigits << endl;

    return 0;
}
