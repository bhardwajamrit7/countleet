// Last updated: 6/16/2025, 11:46:42 AM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,count=0,mx=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]==0) count++;
            while(count>k){
                if(nums[l]==0) count--;
                l++;
            }
            mx=max(mx,r-l+1);
            r++;
        }
        return mx;
    }
};