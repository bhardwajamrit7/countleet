// Last updated: 8/18/2025, 4:51:49 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int end=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
               swap(nums[i],nums[end]);
               end++;
            }
        }
       
    }
};