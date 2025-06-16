// Last updated: 6/16/2025, 11:47:54 AM
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            while(size>0){
                TreeNode*p=q.front();
                q.pop();
                if(p->left!=NULL)q.push(p->left);
                if(p->right!=NULL)q.push(p->right);
                v.push_back(p->val);
                size--;
            }
            ans.push_back(v);
        }
        return ans;
    }
};