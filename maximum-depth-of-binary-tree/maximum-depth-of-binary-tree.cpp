/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        unsigned int leftHeight = maxDepth(root->left);//get the left height
        unsigned int rightHeight = maxDepth(root->right);//get the right height
        
        return max(leftHeight,rightHeight) + 1;//max of the values plus 1 for root
    }
};
