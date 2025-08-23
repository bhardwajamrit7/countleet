// Last updated: 8/23/2025, 10:38:46 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      vector<int>ans;
      int left=0;//to m-1
      int right=m-1;//to 0 
      int  top=0;//to n-1
      int bot=n-1;//to 0
      while(top<=bot && left <=right){
       for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
       
       }
        top++;
       for(int i=top;i<=bot;i++){
       ans.push_back(matrix[i][right]);
       
       }
       right--;
       if(top<=bot){
        for(int i=right;i>=left;i--){
        ans.push_back(matrix[bot][i]);
       
       }
        bot--;
       }
       
       if(left<=right){
       for(int i=bot;i>=top;i--){
        ans.push_back(matrix[i][left]);
        
       }
       left++;
       }
       

      }
      return ans;
    }
};