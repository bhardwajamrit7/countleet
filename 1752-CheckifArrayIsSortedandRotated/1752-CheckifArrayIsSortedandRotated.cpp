// Last updated: 9/11/2025, 8:03:42 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        if(count>1) return false;
        else return true;
    }
};