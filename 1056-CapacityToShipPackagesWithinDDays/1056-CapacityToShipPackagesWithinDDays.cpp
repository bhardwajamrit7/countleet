// Last updated: 6/16/2025, 11:46:40 AM
class Solution {

    bool check(vector<int>&weights,int mid,int days){
        int count=0;
        int sum=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(sum>mid){
                count++;sum=0;
                i--;
            }
        }
        if(sum>0) count++;
        return count<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0,mx=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            mx=max(mx,weights[i]);
        }
        int ans=INT_MAX;
        int low=mx,high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(!check(weights,mid,days)){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        //    if (check(weights, mid, days)) {
        //         ans = mid;        
        //         high = mid - 1;
        //     } else {
        //         low = mid + 1;
        //     }
         }
        return ans;
    }
};