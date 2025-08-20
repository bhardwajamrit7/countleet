// Last updated: 8/20/2025, 10:51:00 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=INT_MAX;
        int maxProfit=0;

        for(auto pr: prices) {
            cp = min(cp, pr);
            maxProfit = max(maxProfit, pr - cp);
        }

        return maxProfit;
    }
};
