// Last updated: 7/2/2025, 9:44:33 AM
class Solution {
    bool isPossible(vector<int>&position,int mid,int m){
        int balls=1;
        int lastPos=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-lastPos>=mid){
                balls++;
                lastPos=position[i];
             if(balls==m){
            return true;
             }
        }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
         int n=position.size();
        int low=1;
        int high=position[n-1]-position[0];      
        int res=0;
        while(low<=high){
            int mid=low+(high-low)/2; 
            if(isPossible(position,mid,m)){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;

    }
};