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
    int kthSmallest(TreeNode* root, int k) {
        return traverse(root, k);
    }
    
    int traverse(TreeNode* head, int& k)
    {
        //this should always be true but just in case, since k is always valid
        if( head )
        {
            //capture the value as we go back up
            int val = traverse(head->left, k);
            return k == 0 ? val : --k == 0 ? head->val : traverse(head->right, k);
        }
        return INT_MIN;
    }
};
