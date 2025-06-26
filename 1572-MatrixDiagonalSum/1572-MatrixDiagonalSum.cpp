// Last updated: 6/26/2025, 2:44:06 PM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        if(n==1) return mat[0][0];
        int i=0;
        int k=n-1;
        int j=0;
       while(i<=n &&j<=n && k>=0){
        //  if(k<0) break;
        sum+=mat[i][j]; 
        sum+=mat[i][k];   
        k--;
        i++;
        j++; 
       }
       if(n%2!=0){
        sum-=mat[n/2][n/2];
       }
       return sum;

    }
};