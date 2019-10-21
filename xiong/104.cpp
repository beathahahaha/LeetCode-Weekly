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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int mr = 1;
        vector<TreeNode*> s;
        vector<int> sl;
        s.push_back(root);
        sl.push_back(1);
        while(!s.empty()){
            TreeNode* now = s.back();
            int nowl = sl.back();
            mr = max(mr, nowl);
            s.pop_back();
            sl.pop_back();
            if(now->right != NULL){
                s.push_back(now->right);
                sl.push_back(nowl + 1);
            }
            if(now->left != NULL){
                s.push_back(now->left);
                sl.push_back(nowl + 1);
            }
        }
        return mr;
    }
};