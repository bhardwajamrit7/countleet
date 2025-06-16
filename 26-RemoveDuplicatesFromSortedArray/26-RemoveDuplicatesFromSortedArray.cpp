// Last updated: 6/16/2025, 11:48:38 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        int left=0;
        int right=n-1;
        for(int i=1;i<n;i++){
            if(nums[left]!=nums[i])
            {
                left++;
                nums[left]=nums[i];
            }
        }
        return left+1;
       
    }
};