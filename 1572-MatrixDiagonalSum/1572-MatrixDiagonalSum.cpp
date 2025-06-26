// Last updated: 6/26/2025, 2:39:12 PM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        if(n==1) return mat[0][0];
        int i=0;
        int k=n-1;
       while(i<=n){
         if(k<0) break;
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
        }

        sum+=mat[i][k];   
        k--;
        i++;
        cout<<sum<<endl;
       }
       cout<<sum<<" ";
       if(n%2!=0){
        sum-=mat[n/2][n/2];
       }
       return sum;

    }
};