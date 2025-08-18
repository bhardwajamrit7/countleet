// Last updated: 8/18/2025, 4:38:04 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[start]=nums[i];
                start++;
            }
        }
        for(int i=start;i<n;i++){
            nums[i]=0;
        }
    }
};