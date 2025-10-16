// Last updated: 10/16/2025, 9:03:57 PM
class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>mp;

        for(int &x:nums){
            int r=((x%value)+value)%value;
            mp[r]++;
        }
        int mex=0;
        while(mp[(mex%value)]>0){
            mp[(mex%value)]--;
            mex++;
        }
        return mex;
    }
};