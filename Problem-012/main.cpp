#include<iostream>

using namespace std;

int countDivisors(int);
int findTriangleNumberWithDivisors(int);

int main() {
    int result = findTriangleNumberWithDivisors(500);

    cout << "The first triangle number with over 500 divisors is: " << result << endl;

    return 0;
}

int countDivisors(int number) {
    int count = 0;

    for (int i = 1; i * i <= number; i++) {
        if (number % i == 0) {
            if (number / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }

    return count;
}

int findTriangleNumberWithDivisors(int divisorThreshold) {
    int index = 1;
    while (true) {
        int triangleNumber = index * (index + 1) / 2;
        if (countDivisors(triangleNumber) > divisorThreshold) {
            return triangleNumber;
        }
        index++;
    }
}

/*
void showTriangleNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        int triangleNum = getTriangleNumber(i);
        cout << triangleNum << ": ";
        
        for (int j = 1; j <= triangleNum; j++) {
            if (triangleNum % j == 0) {
                cout << j << " ";
            }
        }

        cout << endl;
    }
}

int getTriangleNumber(int index) {
    int sum = 0;
    for (int i = 1; i <= index; i++) {
        sum += i;
    }

    return sum;
}

int countDivisors(int number) {
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    return count;
}
*/
