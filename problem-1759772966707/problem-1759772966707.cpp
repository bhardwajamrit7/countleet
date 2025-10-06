// Last updated: 10/6/2025, 11:19:26 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({grid[0][0], 0, 0});
        vector<vector<int>> visited(n, vector<int>(n, 0));
        visited[0][0] = 1;

        while (!pq.empty()) {
            auto curr = pq.top(); pq.pop();
            int time = curr[0], r = curr[1], c = curr[2];
            if (r == n - 1 && c == n - 1) return time;
            for (auto &d : dirs) {
                int nr = r + d[0], nc = c + d[1];
                if (nr >= 0 && nc >= 0 && nr < n && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = 1;
                    pq.push({max(time, grid[nr][nc]), nr, nc});
                }
            }
        }
        return -1;
    }
};
