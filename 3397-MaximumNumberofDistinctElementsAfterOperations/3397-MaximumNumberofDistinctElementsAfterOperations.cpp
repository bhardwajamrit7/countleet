// Last updated: 10/18/2025, 10:03:00 PM
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int prev=INT_MIN;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int minV=nums[i]-k;

            if(prev<minV){
                prev=minV;
                cnt++;
            }
            else if(prev<nums[i]+k){
                prev=prev+1;
                cnt++;
            }

        }
        return cnt;
    }
};