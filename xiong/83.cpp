/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        if(head->next == NULL) return head;
        ListNode *first = head, *second = head->next;
        if(first == NULL || second == NULL) return head;
        while(second != NULL){
            if(first->val == second->val){
                first->next = second->next;
                second = first->next;
            }else{
                first = first->next;
                second = second->next;
            }
        }
        // ListNode *t = head;
        // while(t->next != NULL){
        //     cout<<(t->val);
        //     t = t->next;
        // }
        return head;
        
    }
};