// Last updated: 6/16/2025, 11:47:33 AM
// Same with dx, dy:
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&vis,vector<vector<char>>& grid ){
        int n= grid.size();
        int m=grid[0].size();
        if(i<0||j<0||i>=n || j>=m){
            return;
        }
        if(grid[i][j]=='0'|| vis[i][j]==1){
            return;
        }
        cout<<i<<" "<<j<<"here\n";
        vis[i][j]=1;

        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int newx=i+dx[k];
            int newy=j+dy[k];
            
            dfs(newx,newy,vis,grid);
        }

    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<i<<" "<<j<<"\n";
                if(grid[i][j]=='1'&& vis[i][j]==0){
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};