// Soln for problem 8
#include <iostream>
#include <string>

int main() {
    std::string number =
        "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450";

    int adjacentDigits = 4; // You can change this to 13 for the actual problem

    long long maxProduct = 0;
  /*
  The expression number.length() - adjacentDigits is used to determine the stopping condition for the loop. Let's break it down:
  
  1. number.length(): This represents the total length of the string number.
  2. adjacentDigits: This is the number of adjacent digits you are considering in each iteration.
  
  By subtracting adjacentDigits from the total length, you ensure that the loop stops early enough so that when you extract a substring of length adjacentDigits starting from the current position i,
  you don't go beyond the end of the string.
  
  For example, consider a string of length 10 and you want to extract substrings of length 3. The valid starting positions would be 0, 1, 2, 3, 4, 5, 6, 7 (up to 10 - 3 = 7),
  because starting from position 8 and beyond would result in substrings that go beyond the end of the string.

  Finally, number.length() - adjacentDigits ensures that the loop iterates over valid starting positions for extracting substrings of the desired length.
  */
    for (int i = 0; i <= number.length() - adjacentDigits; ++i) {
        long long product = 1;
        for (int j = 0; j < adjacentDigits; ++j) {
            // Convert the character to its integer value and multiply
            product *= number[i + j] - '0';
        }
        maxProduct = std::max(maxProduct, product);
    }

    std::cout << "The maximum product of " << adjacentDigits << " adjacent digits is: " << maxProduct << std::endl;

    return 0;
}
