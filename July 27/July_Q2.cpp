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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head->next) 
            return NULL;

        ListNode *curr = head, *prev = NULL;
        int count = 0, cal = 0;

        while(curr) {
            count++;
            curr = curr->next;
        }   
        curr = head;
        cal = count - n;

        if(!cal) {
            head = head->next;
            return head;
        }

        while(cal && curr) {
            prev = curr;
            curr = curr->next;
            cal--;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        return head;
    }
};