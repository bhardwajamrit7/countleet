// Last updated: 6/16/2025, 11:47:50 AM
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
int maxheight(TreeNode* root){
    if(root==NULL) return 0;
    int left_depth=maxheight(root->left);
    int right_depth=maxheight(root->right);
    if(left_depth==-1|| right_depth==-1) return -1;
    if(abs(left_depth-right_depth)>1) return -1;
    return 1+max(left_depth,right_depth);
    
}
    bool isBalanced(TreeNode* root) {
       int height=maxheight(root);
       if(height==-1) return false;
       return true;
        }
};