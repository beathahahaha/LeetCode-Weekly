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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p == NULL) return false;
        if(q == NULL) return false;
        deque<TreeNode*> s1, s2;
        s1.push_front(p);
        s2.push_front(q);
        while((!s1.empty()) && (!s2.empty())){
            if(s1.empty() || s2.empty()) return false;
            TreeNode* v1 = s1.back();
            TreeNode* v2 = s2.back();
            if(v1->val != v2->val) return false;
            s1.pop_back();
            s2.pop_back();
            if(v1->left != NULL) {
                s1.push_front(v1->left);
                if(v2->left == NULL) return false;
                s2.push_front(v2->left);
            }else if(v2->left != NULL) return false;
            if(v1->right != NULL){
                s1.push_front(v1->right);
                if(v2->right == NULL) return false;
                s2.push_front(v2->right);
            }else if(v2->right != NULL) return false;
        }
        return true;
        
    }
};