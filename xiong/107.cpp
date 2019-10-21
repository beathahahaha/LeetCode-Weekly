/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <algorithm>
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return vector<vector<int>>{};
        vector<vector<int>> ans = {};

        vector<TreeNode*> s;
        vector<int> sl;
        s.push_back(root);
        sl.push_back(0);
        while(!s.empty()){
            TreeNode* now = s.back();
            int nowl = sl.back();
            s.pop_back();
            sl.pop_back();
            
            if(nowl >= ans.size()){
                vector<int> tmp;
                tmp.push_back(now->val);
                ans.insert(ans.begin() + nowl, tmp);
            }else{
                ans[nowl].push_back(now->val);
            }
            if(now->right != NULL){
                s.push_back(now->right);
                sl.push_back(nowl + 1);
            }
            if(now->left != NULL){
                s.push_back(now->left);
                sl.push_back(nowl + 1);
            }

        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};