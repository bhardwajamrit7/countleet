// Last updated: 6/16/2025, 11:48:27 AM
class Solution {
public:
    void fun(vector<int>&a,int id,vector<int>&v,int t,vector<vector<int>>&ans)
    {
        int n=a.size();
        if(id==n){
            if(t==0){
                ans.push_back(v);
            }
                return;
        }
        if(a[id]<=t){
            v.push_back(a[id]);
            fun(a,id,v,t-a[id],ans);
            v.pop_back();
        }
        fun(a,id+1,v,t,ans);
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(candidates,0,v,target,ans);
        return ans;
    }
};