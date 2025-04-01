// Last updated: 4/1/2025, 8:36:32 PM
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