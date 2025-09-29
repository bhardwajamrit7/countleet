// Last updated: 9/30/2025, 1:14:02 AM
class Solution {
public:
    int v[51][51];
    int solve(vector<int>& values,int i,int j){
       
        if(j-i+1<3) return 0;

        if(v[i][j]!=-1){
            return v[i][j];
        }
        int res=INT_MAX;
        for(int k=i+1;k<j;k++){
            int wt=values[i]*values[k]*values[j]
                    +solve(values,i,k)
                    +solve(values,k,j);
            res=min(res,wt);
        }
        return v[i][j]=res;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        memset(v,-1,sizeof(v));
        return solve(values,0,n-1);
    }
};