// Last updated: 8/22/2025, 10:19:07 PM
class Solution {
    void visRow(int i,vector<vector<int>>&mat,int m){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=0){
                mat[i][j]=-777788;
            }
        }
    }
    void visCol(int j,vector<vector<int>>&mat,int n){
        for(int i=0;i<n;i++){
            if(mat[i][j]!=0){
                mat[i][j]=-777788;
            }
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0) return ;
        int n=matrix[0].size();
        if (n == 0) return;  
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    visRow(i,matrix,n);
                    visCol(j,matrix,m);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-777788){
                    matrix[i][j]=0;
                }
            }
        }
    }
};