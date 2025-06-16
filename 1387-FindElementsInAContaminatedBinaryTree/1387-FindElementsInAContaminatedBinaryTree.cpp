// Last updated: 6/16/2025, 11:46:38 AM
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
class FindElements {
    void fun(TreeNode* root,unordered_set<int> &st){
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            auto temp = q.front();
            q.pop();

            if(temp->left){
                temp->left->val = 2 * (temp->val)+1;
                q.push(temp->left);
                st.insert(temp->left->val);

            }
            if(temp->right){
                temp->right->val = 2 * (temp->val)+2;
                q.push(temp->right);
                st.insert(temp->right->val);
            }
        }

    }
public:
    unordered_set<int> st;
    FindElements(TreeNode* root) {
        root->val = 0;
        st.insert(0);
        fun(root,st);
        
    }
    
    bool find(int target) {
        return st.find(target)!=st.end();
        
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */