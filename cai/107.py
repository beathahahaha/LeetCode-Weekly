# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        if not root:
            return []
        left=self.levelOrderBottom(root.left)
        right=self.levelOrderBottom(root.right)
        l=len(left)
        r=len(right)
        if l==0:
            return right+[[root.val]]
        if r==0:
            return left+[[root.val]]
        if r>l:
            return right[:r-l]+[left[i]+right[r-l+i] for i in range(l)]+[[root.val]]
        elif l>r:
            return left[:l-r]+[left[l-r+i]+right[i] for i in range(r)]+[[root.val]]
        else:
            return [left[i]+right[i] for i in range(l)]+[[root.val]]