// Last updated: 8/18/2025, 7:06:46 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int total=n*(n+1)/2;
        int sum=0;
        for(auto c:nums){
            sum+=c;
        }
        return total-sum;
    }
};