// Last updated: 6/26/2025, 9:36:20 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int max=INT_MIN;
        int prefSum=0;

        for(int i=0;i<n;i++){
            prefSum+=nums[i];

            if(max<prefSum){
                max=prefSum;
            }

            if(prefSum<0){
                prefSum=0;
            }

        }
        return max;
    }
};