#include<iostream>

int main() {
    int sum = 0;
    for(int i = 0; i < 100; i++) {
        sum = (i%3==0 || i%5==0) ? sum+=i : sum;
    }
    std::cout << "Sum of all multiplies between 3 or 5 below 100 is " << sum << std::endl;
    return 0;
}