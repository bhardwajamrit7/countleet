// Last updated: 4/3/2025, 3:35:27 PM
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<tuple<int, int, char, int>> robots;
        for (int i = 0; i < n; i++) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(robots.begin(), robots.end()); // Sort by position
        
        stack<pair<int, int>> st; // Stores {health, index}
        vector<int> result(n, 0);
        
        for (auto &[pos, health, dir, idx] : robots) {
            if (dir == 'R') {
                st.push({health, idx});
            } else { // 'L' direction
                while (!st.empty() && health > 0) {
                    auto [rHealth, rIdx] = st.top();
                    if (rHealth > health) {
                        st.pop();
                        st.push({rHealth - 1, rIdx}); // Decrement surviving R robot's health
                        health = 0;
                    } else if (rHealth < health) {
                        st.pop();
                        health--;
                    } else {
                        st.pop();
                        health = 0;
                    }
                }
                if (health > 0) result[idx] = health;
            }
        }
        
        while (!st.empty()) {
            auto [health, idx] = st.top();
            st.pop();
            result[idx] = health;
        }
        
        vector<int> survivors;
        for (int i = 0; i < n; i++) {
            if (result[i] > 0) {
                survivors.push_back(result[i]);
            }
        }
        return survivors;
    }
};