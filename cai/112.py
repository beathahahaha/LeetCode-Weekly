# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:        
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        self.exist=False
        self.wow(root,sum)
        return self.exist
    
    def wow(self, root, sum):
        if root:
            if (not (root.left)) and (not (root.right)) and (not sum-root.val):
                self.exist=True
            else:
                self.wow(root.left,sum-root.val)
                self.wow(root.right,sum-root.val)