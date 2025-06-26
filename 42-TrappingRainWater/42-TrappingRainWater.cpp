// Last updated: 6/26/2025, 10:12:47 AM
class Solution {
public:
   int trap(vector<int>& arr) {
        int n=arr.size();
       vector<int>pr(n);
       pr[0]=arr[0];
       for(int i=1;i<n;i++){
        pr[i]=max(pr[i-1],arr[i]);
       }

       vector<int>suf(n);

       suf[n-1]=arr[n-1];
       for(int i=n-2;i>=0;i--){
        suf[i]=max(suf[i+1],arr[i]);
       }
       int sum=0;
       for(int i=0;i<n;i++){
        sum+=min(pr[i],suf[i])-arr[i];
       }
        return sum;
    }
};