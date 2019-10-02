# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def eql(p,q):
    if p.val==q.val:
        left=False
        right=False
        if p.left and q.left:
            left=eql(p.left, q.left)
            if not left:
                return False
        if p.right and q.right:
            right=eql(p.right,q.right)
            if not right:
                return False
        if (not p.left) and (not q.left):
            left=True
        if (not p.right) and (not q.right):
            right=True
        if left and right:
            return True
        else:
            return False
    else:
        return False

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if (not p) and (not q):
            return True
        if (not p) and q:
            return False
        if p and (not q):
            return False
        return eql(p, q)