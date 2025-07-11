// Last updated: 7/11/2025, 10:16:27 AM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);
        // ans[i][0]=1;
        // ans[i][i]=1;
        for(int j=1;j<i;j++){
            row[j]=ans[i-1][j-1]+ans[i-1][j];
            // cout<<ans[i][j];
        }
        ans.push_back(row);
        }
        return ans;
        
    }
};