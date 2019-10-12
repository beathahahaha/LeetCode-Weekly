# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        if not root:
            return 1
        left=self.isBalanced(root.left)
        if not left:
            return False
        right=self.isBalanced(root.right)
        if not right:
            return False
        if abs(left-right)<=1:
            return max(left,right)+1
        else:
            return False