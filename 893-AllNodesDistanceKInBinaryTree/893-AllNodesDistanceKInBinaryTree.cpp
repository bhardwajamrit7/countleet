// Last updated: 6/16/2025, 11:46:50 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void mapParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parentMap) {
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if (node->left) {
                parentMap[node->left] = node;
                q.push(node->left);
            }
            
            if (node->right) {
                parentMap[node->right] = node;
                q.push(node->right);
            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parentMap;
        mapParents(root, parentMap);
        
        queue<pair<TreeNode*, int>> q;
        unordered_set<TreeNode*> visited;
        vector<int> result;
        
        q.push({target, 0});
        visited.insert(target);
        
        while (!q.empty()) {
            TreeNode* node = q.front().first;
            int dist = q.front().second;
            q.pop();
            
            if (dist == k) {
                result.push_back(node->val);
            }
            
            if (dist < k) {
                if (node->left && visited.find(node->left) == visited.end()) {
                    q.push({node->left, dist + 1});
                    visited.insert(node->left);
                }
                
                if (node->right && visited.find(node->right) == visited.end()) {
                    q.push({node->right, dist + 1});
                    visited.insert(node->right);
                }
                
                if (parentMap.find(node) != parentMap.end() && visited.find(parentMap[node]) == visited.end()) {
                    q.push({parentMap[node], dist + 1});
                    visited.insert(parentMap[node]);
                }
            }
        }
        
        return result;
    }
};