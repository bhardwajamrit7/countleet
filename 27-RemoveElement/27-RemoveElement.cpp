// Last updated: 6/16/2025, 11:48:36 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0;
        int n=nums.size();
       for (int r = 0; r < n; r++) {
            if (nums[r] != val) {
                nums[l] = nums[r];
                l++;
            }
        }
       return l;
    }
};