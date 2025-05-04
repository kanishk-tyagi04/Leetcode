class Solution {
public:
    void performOP(vector<vector<int>>& mat, int row, int col) {
        int m = mat.size();
        int n = mat[0].size();
        for (int j = 0; j < n; j++) {
            mat[row][j]++;
        }

        for (int i = 0; i < m; i++) {
            mat[i][col]++;
        }
    }

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));

        for (int i = 0; i < indices.size(); i++) {
            int row = indices[i][0];
            int col = indices[i][1];
            performOP(mat, row, col);
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] % 2 != 0) count++;
            }
        }

        return count;
    }
};
