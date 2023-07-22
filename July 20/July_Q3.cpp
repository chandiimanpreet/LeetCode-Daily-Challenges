/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head || !head->next)
            return head;
         
        ListNode *curr = head, *fast=head->next; 
        
        while(fast) {
            if(curr->val != fast->val) {
                curr->next = fast;
                curr = fast;
            }
            fast = fast->next;
        }
        curr->next = fast;
        return head;
    }
};