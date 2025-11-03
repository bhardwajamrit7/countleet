// Last updated: 11/3/2025, 10:31:49 PM
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int total = 0;
        int n = colors.size();
        int prevMax = neededTime[0];

        for (int i = 1; i < n; i++) {
            if (colors[i] == colors[i - 1]) {
                total += min(prevMax, neededTime[i]); // remove smaller
                prevMax = max(prevMax, neededTime[i]); // keep larger one
            } else {
                prevMax = neededTime[i];
            }
        }

        return total;
    }
};
