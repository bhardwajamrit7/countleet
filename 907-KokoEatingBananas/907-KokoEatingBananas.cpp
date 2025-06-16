// Last updated: 6/16/2025, 11:46:49 AM
class Solution {
     bool check(vector<int>&piles,int mid,int h){
            long long int time=0;
            int n=piles.size();
        for(int i=0;i<n;i++){
            time+=piles[i]/mid;
            if(piles[i]%mid!=0) time++;
        }
        if(time>h) return false;
        else return true;
        }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=0;
        for(int i=0;i<n;i++){
          mx=max(mx,piles[i]);
        }
        int high =mx;
        int ans=INT_MAX;
        int low=1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if (check(piles, mid, h)) {
                ans = mid;  
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        return ans;
       
    }
};