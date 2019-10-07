# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def eql(left,right):
    if (not left) and (not right):
        return True
    if left and right:
        if left.val==right.val:
            if eql(left.left,right.right) and eql(left.right,right.left):
                return True
    else:
        return False

class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        if eql(root.left,root.right):
            return True
        else:
            return False