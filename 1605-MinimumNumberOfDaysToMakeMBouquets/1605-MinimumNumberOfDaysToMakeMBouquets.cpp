// Last updated: 6/16/2025, 11:46:33 AM
class Solution {
    bool check(vector<int>&b,int mid,int m,int k){
        int n=b.size();
        int c=0,bl=0;
        for(int i=0;i<n;i++){
            if(b[i]<=mid)
            {
                c++;
                if(c==k){
                    bl++;
                    c=0;
                }      
            }
            else{
                c=0;
            }
        }
        return bl>=m;
    }
public:
    int minDays(vector<int>& b, int m, int k) {
        int n=b.size();
        int mx=0;
        int l=INT_MAX;
        if(m>n/k) return -1;
        for(int i=0;i<n;i++){
            mx=max(mx,b[i]);
        }
        for(int i=0;i<n;i++){
            l=min(l,b[i]);
        }
        int ans=mx;
        int low=l,high=mx;
        while(low<=high){
        int mid=low+(high-low)/2;
            if(check(b,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};