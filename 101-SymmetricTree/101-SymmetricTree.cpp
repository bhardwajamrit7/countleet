// Last updated: 6/16/2025, 11:47:56 AM
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
    bool isSametree(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        else if(p==NULL || q==NULL) return false;
        if(p->val !=q->val) return false;
        if(isSametree(p->left,q->right)&&isSametree(p->right,q->left)){
            return true;
        }
        else return false;
    }

    bool isSymmetric(TreeNode* root) {
        return isSametree(root->left,root->right);
    }
};