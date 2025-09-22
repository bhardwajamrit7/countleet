// Last updated: 9/23/2025, 12:08:32 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int maxF=0;
        for(auto &x:mp){
            maxF=max(maxF,x.second);

        }
        int sum=0;
        for( auto &x :mp){
            if(x.second==maxF) sum+=maxF;
        }
        return sum;
        
    }
};