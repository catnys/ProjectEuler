#include "problem18.hpp"
#include <algorithm>

int Problem18Solver::solveMaxPathSum(const std::vector<std::vector<int>>& triangle) {
    // Start from the second-last row and move upwards
    for (int i = triangle.size() - 2; i >= 0; --i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            // Update each element to store the max path sum ending at this element
            triangle[i][j] += std::max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    // The top of the triangle now contains the maximum path sum
    return triangle[0][0];
}
