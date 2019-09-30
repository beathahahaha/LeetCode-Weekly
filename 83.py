# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if head == None:
            return head
        now = head
        nex = head.next
        while nex != None:
           if now.val==nex.val:
               now.next=nex.next
               nex=now.next
           else:
               now=now.next
               nex=nex.next
        return head