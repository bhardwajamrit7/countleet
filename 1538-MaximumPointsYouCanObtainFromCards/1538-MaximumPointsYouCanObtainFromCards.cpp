// Last updated: 6/16/2025, 11:46:36 AM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;
        int n=cardPoints.size()-1;
        int sum=0;
        //int mx=INT_MIN;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        leftsum=sum;
        for(int i=k-1;i>=0;i--){
            leftsum=leftsum-cardPoints[i];
            rightsum=rightsum+cardPoints[n];
            n--;
            sum=max(sum,leftsum+rightsum);
        }
        return sum;
    }
};