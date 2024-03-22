# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a = []
        while head != None:
            a.append(head.val)
            head = head.next


        N = len(a)
        for i in range(N):
            if a[i] != a[N-1-i]: return False
        return True
