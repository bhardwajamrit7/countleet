// Last updated: 10/4/2025, 12:29:56 AM
class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap.size();
        if (n == 0) return 0;
        int m = heightMap[0].size();
        if (m == 0) return 0;

        using T = tuple<int,int,int>;
        priority_queue<T, vector<T>, greater<T>> pq;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            pq.push({heightMap[i][0], i, 0});
            pq.push({heightMap[i][m-1], i, m-1});
            visited[i][0] = visited[i][m-1] = true;
        }
        for (int j = 0; j < m; j++) {
            pq.push({heightMap[0][j], 0, j});
            pq.push({heightMap[n-1][j], n-1, j});
            visited[0][j] = visited[n-1][j] = true;
        }

        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        int waterStore = 0;
        int maxBoundary = INT_MIN;

        while (!pq.empty()) {
            auto [h, x, y] = pq.top();
            pq.pop();
            maxBoundary = max(maxBoundary, h);

            for (auto &d : dirs) {
                int nx = x + d.first, ny = y + d.second;
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    if (heightMap[nx][ny] < maxBoundary) {
                        waterStore += maxBoundary - heightMap[nx][ny];
                    }
                    pq.push({heightMap[nx][ny], nx, ny});
                }
            }
        }
        return waterStore;
    }
};
