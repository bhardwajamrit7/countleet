// Last updated: 6/16/2025, 11:46:29 AM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mx=-1;
        int diff;
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
            if(nums[i]<nums[j]){
               mx=max(mx,nums[j]-nums[i]);
            }     
            }
        }
        return mx;
    }
};