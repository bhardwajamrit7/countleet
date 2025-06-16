// Last updated: 6/16/2025, 11:46:34 AM
class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int r=0,l=0,count=0,mx=0;
        int n=a.size();
        while(r<n){
            if(a[r]==0)count++;
            while(count>1){
                if(a[l]==0) count--;
                l++;
            }
            mx=max(mx,r-l+1);
            r++;
        }
        return mx-1;
    }
};