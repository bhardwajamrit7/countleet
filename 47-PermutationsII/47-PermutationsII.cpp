// Last updated: 3/31/2025, 10:05:50 PM
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        backtrack(result, temp, nums, used);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
                continue; // Skip duplicates
            }
            used[i] = true;
            temp.push_back(nums[i]);
            backtrack(result, temp, nums, used);
            temp.pop_back();
            used[i] = false;
        }
    }
};