// Last updated: 7/5/2025, 8:45:03 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=-1;
        for(int i=0;i<n;){
             int count=0;
             
             cout<<i<<" ";
             for(int j=i;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
             }
             
             if(count==arr[i]){
               int mx=arr[i];
               ans=max(ans,mx);
             }
             i=i+count;


        }
        return ans;
    }
};