// Last updated: 6/16/2025, 11:48:24 AM
class Solution {
public:
   int trap(vector<int>& arr) {
        int n=arr.size();
        int pr[n];
        // vector<int>pr(n);
        pr[0]=arr[0];
        for(int i=1;i<n;i++){
            pr[i]=max(pr[i-1],arr[i]);
        }
        int sf[n];
        // vector<int>sf(n);
        sf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            sf[i]=max(sf[i+1],arr[i]);
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(pr[i],sf[i])-arr[i];
        }
        return sum;
    }
};