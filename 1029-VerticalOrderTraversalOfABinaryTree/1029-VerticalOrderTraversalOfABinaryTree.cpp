// Last updated: 6/16/2025, 11:46:43 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});


        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* tmp=p.first;
            int c=p.second.first;
            int r=p.second.second;

            mp[c][r].insert(tmp->val);

            if(tmp->left){
                q.push({tmp->left,{c-1,r+1}});
            }
            if(tmp->right){
                q.push({tmp->right,{c+1,r+1}});
            }


        }
        vector<vector<int>>ans;
        for(auto it:mp){
            vector<int>col;
            for(auto j:it.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};