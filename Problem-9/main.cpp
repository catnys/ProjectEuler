#include <iostream>
#include <math.h>

int product(int);

int main() {
    std::cout << "There exists exactly one Pythagorean triplet for which a * b * c = " << product(1000) << std::endl; // you may change the product parameter as your desired sum
    return 0;
}


int product(int sum) {
    int a, b, c;
    for(a = 1; a < sum; a++) {
        for(b = 1; b < sum - a; b++) {
            c = sum - a - b;
            if(pow(a,2) + pow(b,2) == pow(c,2)) {
                return a*b*c;
            }
        }
    }
    return a+b+c;
}
