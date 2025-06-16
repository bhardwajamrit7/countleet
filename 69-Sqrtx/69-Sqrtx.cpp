// Last updated: 6/16/2025, 11:48:09 AM
class Solution {
public:
    long long int mySqrt(int x) {
        int low =1,high=x,ans=0;
        if(x==0|| x==1) return x;
        while(low<=high){
        long long int mid=low+ (high-low)/2;
            if(mid<=x/mid){
                ans=mid;
                low=mid+1;

            }
            else if(mid>x/mid){
                high=mid-1;
            }
        }
        return ans;
    }
};