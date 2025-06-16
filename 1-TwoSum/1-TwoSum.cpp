// Last updated: 6/16/2025, 11:49:15 AM
class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp[target-nums[i]]>0){
        vector<int>ans;
        ans.push_back(mp[target-nums[i]]-1);
       ans.push_back(i);
        return ans;
        }
        mp[nums[i]]=i+1;
    }
   return {-1};
     }
};