// Last updated: 6/27/2025, 10:23:54 AM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            while(start<=end){
                swap(matrix[i][start++],matrix[i][end--]);
            }
        }
    }
};