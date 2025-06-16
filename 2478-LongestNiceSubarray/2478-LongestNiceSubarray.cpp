// Last updated: 6/16/2025, 11:46:21 AM
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        int len = 0;
        for(int i=0;i<nums.size();i++){
            int mask = 0;
            for(int j=i;j<nums.size();j++){
                if((mask & nums[j])!=0) break;

                mask |= nums[j];
                len = max(len,j-i+1);
            }
        }

        return len;
        
    }
};