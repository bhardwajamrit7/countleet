// Last updated: 9/20/2025, 11:04:30 PM
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        auto lambda=[](vector<int>&A,vector<int>&B){
            if(A[0]==B[0]){
                return A[1]>B[1];
            }
            return A[0]<B[0];
        };
        sort(points.begin(),points.end(),lambda);
        for(int i=0;i<n;i++){
            int maxiY=INT_MIN;
            int x1=points[i][0];
            int y1=points[i][1];
            for(int j=i+1;j<n;j++){
                int x2=points[j][0];
                int y2=points[j][1];
               if(y2>y1){
                continue;
               }
               if(y2>maxiY){
                res++;
                maxiY=y2;
               }
            }
        }
        return res;
    }
};