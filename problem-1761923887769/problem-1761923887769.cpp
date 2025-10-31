// Last updated: 10/31/2025, 8:48:07 PM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto &x:mp){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};