// Last updated: 6/24/2025, 9:42:55 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans(n);
        int even=0,odd=1;
       for(int i=0;i<n;i++){
        if(nums[i]>=0){
            ans[even]=nums[i];
            even+=2;
        }
        else{
            ans[odd]=nums[i];
            odd+=2;
        }
       }
        return ans;
    }
};