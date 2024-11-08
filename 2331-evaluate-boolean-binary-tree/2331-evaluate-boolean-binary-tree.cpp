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
    int helper(TreeNode* root){
        if(root == NULL) return 0;
        if(root->val == 0 || root->val == 1){
            return root->val;
        }
        else if(root->val == 2){
            return helper(root->left) || helper(root->right);
        }
        else{
            return helper(root->left) && helper(root->right);
        }
    }
    bool evaluateTree(TreeNode* root) {
        return helper(root);
    }
};
