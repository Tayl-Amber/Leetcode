class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); ++i) {
            for(int j=0; j<matrix[i].size(); ++j) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = findLargestInCol(matrix, j);
                }
            }
        }
        return matrix;
    }

    int findLargestInCol(const vector<vector<int>>& matrix, const int col) {
        int max = matrix[0][col];

        for(int i=1; i<matrix.size(); ++i) {
            if(matrix[i][col] > max) {
                max = matrix[i][col];
            }
        }

        return max;
    }
};