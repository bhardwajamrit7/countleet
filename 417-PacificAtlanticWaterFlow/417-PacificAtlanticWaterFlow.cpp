// Last updated: 10/6/2025, 12:14:20 AM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> pac(m, vector<int>(n, 0)), atl(m, vector<int>(n, 0));
        queue<pair<int, int>> qPac, qAtl;

        // Add border cells for Pacific (top + left)
        for (int i = 0; i < m; i++) {
            qPac.push({i, 0});
            pac[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            qPac.push({0, j});
            pac[0][j] = 1;
        }

        // Add border cells for Atlantic (bottom + right)
        for (int i = 0; i < m; i++) {
            qAtl.push({i, n - 1});
            atl[i][n - 1] = 1;
        }
        for (int j = 0; j < n; j++) {
            qAtl.push({m - 1, j});
            atl[m - 1][j] = 1;
        }

        bfs(heights, qPac, pac);
        bfs(heights, qAtl, atl);

        vector<vector<int>> res;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pac[i][j] && atl[i][j])
                    res.push_back({i, j});
            }
        }
        return res;
    }

private:
    void bfs(vector<vector<int>>& heights, queue<pair<int, int>>& q, vector<vector<int>>& visited) {
        int m = heights.size(), n = heights[0].size();
        vector<int> dirs = {0, 1, 0, -1, 0};
        
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int x = i + dirs[k], y = j + dirs[k + 1];
                if (x < 0 || y < 0 || x >= m || y >= n || visited[x][y]) continue;
                if (heights[x][y] < heights[i][j]) continue;  // must flow "uphill" or level
                visited[x][y] = 1;
                q.push({x, y});
            }
        }
    }
};
