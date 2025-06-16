// Last updated: 6/16/2025, 11:46:57 AM
class Solution {
public:
    void  dfs(int node,vector<int>& vis,vector<vector<int>>& adj){
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
    } 
    void bfs(int node,vector<int>&vis,vector<vector<int>>& adj){
        queue<int>q;
        int n=adj.size();
        // vector<int>vis(n,0);
        vector<int>ans;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int p=q.front();
            q.pop();
            ans.push_back(p);
            for(auto it: adj[p]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }   


    int findCircleNum(vector<vector<int>>& isConnected) {
         int n=isConnected.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    // adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int count =0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,vis,adj);
                count++;
            }
        }
        return count;
    }
};