#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<bool>>& vis) {
        int m = grid.size();
        int n = grid[0].size();

        vis[row][col] = true;
        queue<pair<int, int>> q;
        q.push({row, col});
        vector<int> d_r = {1, 0, 0, -1};
        vector<int> d_c = {0, -1, 1, 0};

        while (!q.empty()) {
            auto p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;

            for (int k = 0; k < 4; k++) {
                int nRow = r + d_r[k];
                int nCol = c + d_c[k];

                if (nRow >= 0 && nRow < m && nCol >= 0 && nCol < n 
                    && grid[nRow][nCol] == '1' && !vis[nRow][nCol]) {
                    vis[nRow][nCol] = true;
                    q.push({nRow, nCol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    bfs(i, j, grid, vis);
                    count++;
                }
            }
        }

        return count;
    }
};
