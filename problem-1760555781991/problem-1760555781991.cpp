// Last updated: 10/16/2025, 12:46:21 AM
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> countS;
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) cnt++;
            else {
                countS.push_back(cnt);
                cnt = 1;
            }
        }
        countS.push_back(cnt);

        int ans = 0;

        // Case 1: two subarrays inside one long segment
        for (int len : countS)
            ans = max(ans, len / 2);

        // Case 2: two separate segments
        for (int i = 1; i < countS.size(); i++)
            ans = max(ans, min(countS[i], countS[i - 1]));

        return ans;
    }
};
