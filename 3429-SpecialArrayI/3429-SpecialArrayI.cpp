// Last updated: 6/16/2025, 11:46:12 AM
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        for(int i=1;i<n;i++){
            // if(((nums[i]%2==0) && (nums[i-1]%2==0))||((nums[i]%2!=0) && (nums[i-1]%2!=0))) return false;
            if(nums[i-1]%2==nums[i]%2) return false;
        }
        return true;
    }
};