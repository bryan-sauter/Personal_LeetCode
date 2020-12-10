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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if( nums.empty() )
        {
            return nullptr;
        }
        
        return buildTree( nums.begin(), nums.end());
    }
    
    private:
    TreeNode* buildTree(vector<int>::const_iterator a,
                        vector<int>::const_iterator b)
    {
        if( a >= b )
        {
            return nullptr;
        }
        
        vector<int>::const_iterator c = a + (b - a) / 2;
        
        TreeNode* tNode = new TreeNode(*c);
        tNode->left = buildTree(a, c);
        tNode->right= buildTree(c + 1, b);
        
        return tNode;
    }
};
