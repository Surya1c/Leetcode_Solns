class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 1) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
        }
        int maxArea = 0;
        for (int i = 0; i < matrix.size(); i++) {
            sort(matrix[i].begin(), matrix[i].end());
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] * (matrix[i].size() - j) > maxArea) {
                    maxArea = matrix[i][j] * (matrix[i].size() - j);
                }
            }
        }
        return maxArea;
    }
};