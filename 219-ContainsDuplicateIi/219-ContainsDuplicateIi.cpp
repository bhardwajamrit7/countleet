// Last updated: 6/16/2025, 11:47:24 AM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < min(i + k + 1, n); j++) { 
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};
