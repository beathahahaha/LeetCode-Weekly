# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        if not root:
            return 0
        if (not (root.left)) and (not (root.right)):
            return 1
        if root.left and root.right:
            return min(self.minDepth(root.left),self.minDepth(root.right))+1
        elif root.left:
            return self.minDepth(root.left)+1
        elif root.right:
            return self.minDepth(root.right)+1