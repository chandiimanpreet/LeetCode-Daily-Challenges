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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        struct ListNode *first,*last,*temp;

        first = new ListNode;
        first->val = (l1->val + l2->val)%10;
        carry =  (l1->val + l2->val)/10;
        last = first;
        
        while(l1->next!=NULL && l2->next!=NULL) {
            l1 = l1->next;
            l2 = l2->next;

            temp = new ListNode;
        
            temp->val   = (carry + l1->val + l2->val)%10;
            carry = (carry + l1->val + l2->val)/10;
            last->next = temp;
            last = temp;
            last->next = NULL;
        }
        while(l1->next != NULL) { 
            l1 = l1->next;
            temp = new ListNode;

            temp->val = (carry + l1->val)%10;
            carry = (carry + l1->val)/10;
            last->next = temp;
            last = temp;
            last->next = NULL;
            
        }
        while(l2->next != NULL) { 
            l2 = l2->next;
            temp = new ListNode;

            temp->val = (carry + l2->val)%10;
            carry = (carry + l2->val)/10;
            last->next = temp;
            last = temp;
            last->next = NULL;
            
        }
        if(carry) {
            temp = new ListNode;
        
            temp->val = carry;
            last->next = temp;
            last = temp;
            last->next = NULL;
        }
        return first;
    }
};