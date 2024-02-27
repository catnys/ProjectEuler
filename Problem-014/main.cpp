#include <iostream>
#include <vector>

using namespace std;

void displayVector(const vector<int>&);
vector<int> collatzSequence(int);
int findLongestChainUnderLimit(int limit);

int main() {
    int limit = 1000000;
    int startingNumber = findLongestChainUnderLimit(limit);

    cout << "Starting number under " << limit << " producing the longest chain: " << startingNumber << endl;
}

vector<int> collatzSequence(int startingNumber) {
    vector<int> sequence;

    while (startingNumber != 1) {
        sequence.push_back(startingNumber);

        if (startingNumber % 2 == 0) { // if n is even
            startingNumber /= 2;
        } else { // n is odd
            startingNumber = 3 * startingNumber + 1;
        }
    }

    sequence.push_back(1); // Include the final '1' in the sequence
    return sequence;
}

int findLongestChainUnderLimit(int limit) {
    int longestChainLength = 0;
    int startingNumber = 0;

    for (int i = 1; i < limit; ++i) {
        vector<int> sequence = collatzSequence(i);
        if (sequence.size() > longestChainLength) {
            longestChainLength = sequence.size();
            startingNumber = i;
        }
    }

    return startingNumber;
}


void displayVector(const vector<int>& vect) {
    for (const auto &it : vect) {
        // Print the values
        cout << it << ' ';
    }
    cout << endl;
}

