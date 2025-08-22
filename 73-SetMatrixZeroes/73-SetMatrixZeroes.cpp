// Last updated: 8/22/2025, 11:03:13 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0) return ;
        int n=matrix[0].size();
        if (n == 0) return;  
        int col_0=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){

                  matrix[i][0]=0;
                  if(j!=0){
                    matrix[0][j]=0;
                  }
                  else{
                    col_0=0;
                  }
                }

            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0){
                        matrix[i][j]=0;
                    }
                }
            }
        }

        if(matrix[0][0]==0){
        for(int j=0;j<n;j++){
            matrix[0][j]=0;
        }
        }
        if(col_0==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }

    }
};