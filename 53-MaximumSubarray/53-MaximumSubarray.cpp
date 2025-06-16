// Last updated: 6/16/2025, 11:48:16 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int result=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cs=cs+nums[i];
            result=max(result,cs);
            if(cs<0){
                cs=0;
            }
        }
        return result;
    }
};
