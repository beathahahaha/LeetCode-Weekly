# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def depth(tree):
    if not tree:
        return 0
    return max(depth(tree.left),depth(tree.right))+1


class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        return depth(root)

'''
Or

class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        if not root:
            return 0
        return max(maxDepth(root.left),maxDepth(root.right))+1

'''