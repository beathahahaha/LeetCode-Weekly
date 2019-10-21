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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right==NULL) return 1;
        int ans = 1;
        deque<TreeNode*> s;
        deque<int> ansl;
        ansl.push_back(1);
        s.push_back(root);
        while(!s.empty()){
            TreeNode* now = s.front();
            int nowl = ansl.front();
            s.pop_front();
            ansl.pop_front();
            if(now->left == NULL && now->right == NULL){
                return nowl;
            }
            if(now->left != NULL){
                s.push_back(now->left);
                ansl.push_back(nowl + 1);
            }
            if(now->right != NULL){
                s.push_back(now->right);
                ansl.push_back(nowl + 1);
            }
        }
        return ans;
    }
};