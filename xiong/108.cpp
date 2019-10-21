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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        TreeNode* root;
        if(nums.size() == 1){ 
            root = new TreeNode(nums[0]);
            return root;
        }
        int maxlen = nums.size();
        int treeroot = (maxlen/2);
        root = new TreeNode(nums[treeroot]);
        vector<int> leftv = vector<int>(nums.begin(), nums.begin() + treeroot);
        root->left = sortedArrayToBST(leftv);
        vector<int> rightv = vector<int>(nums.begin() + treeroot + 1, nums.end());
        root->right = sortedArrayToBST(rightv);
        
        return root;
        
    }
};