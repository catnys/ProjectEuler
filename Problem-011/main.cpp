#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// Function to split a string into a vector of integers
vector<int> splitStringToIntegers(const string& str) {
    vector<int> result;
    istringstream iss(str);
    int num;
    while (iss >> num) {
        result.push_back(num);
    }
    return result;
}

// Function to read the file and store numbers in a 2D vector
vector<vector<int>> readGridFromFile(const string& filename) {
    vector<vector<int>> grid;

    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            vector<int> row = splitStringToIntegers(line);
            grid.push_back(row);
        }
        file.close();
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }

    return grid;
}

// Function to calculate the product of four adjacent numbers in a given direction
int calculateProduct(const vector<vector<int>>& grid, int row, int col, int dRow, int dCol) {
    int product = 1;

    for (int step = 0; step < 4; ++step) {
        int newRow = row + dRow * step;
        int newCol = col + dCol * step;

        // Check if indices are within the bounds of the grid
        if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size()) {
            product *= grid[newRow][newCol];
        } else {
            return 0;  // If out of bounds, return 0 (no product)
        }
    }

    return product;
}

// Function to find the maximum product of four adjacent numbers in any direction
int findMaximumProduct(const vector<vector<int>>& grid) {
    int directions[4][2] = {{0, 1}, {1, 0}, {1, 1}, {-1, 1}};  // right, down, diagonal-right-down, diagonal-left-down
    int maxProduct = 0;

    for (int row = 0; row < grid.size(); ++row) {
        for (int col = 0; col < grid[0].size(); ++col) {
            for (const auto& direction : directions) {
                int product = calculateProduct(grid, row, col, direction[0], direction[1]);
                maxProduct = max(maxProduct, product);
            }
        }
    }

    return maxProduct;
}

int main() {
    // Specify the path to the file containing the grid
    string filename = "grid.txt";

    // Read the grid from the file
    vector<vector<int>> grid = readGridFromFile(filename);

    // Find and print the maximum product
    int result = findMaximumProduct(grid);
    cout << "The maximum product of four adjacent numbers is: " << result << endl;

    return 0;
}
