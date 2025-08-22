// Last updated: 8/22/2025, 10:36:19 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0) return ;
        int n=matrix[0].size();
        if (n == 0) return;  

        vector<int>Row(m,0);
        vector<int>Col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    Row[i]=1;
                    Col[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(Row[i]==1 || Col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

    }
};