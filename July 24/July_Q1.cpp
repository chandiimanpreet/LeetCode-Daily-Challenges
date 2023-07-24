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
    ListNode *head1=NULL;
    void reverse(ListNode *q,ListNode *p) {
        if(p == NULL) 
            head1 = q;
        else {
            reverse(p,p->next);
            p->next = q;
        }
    }

    void create(ListNode *head) {
        ListNode *temp=NULL,*last=NULL;

        head1 = new ListNode;
        head1->val = head->val;
        head1->next = NULL;
        last = head1;
        head = head->next;

        while(head) {
            temp = new ListNode;
            temp->val = head->val;
            temp->next = NULL;
            last->next = temp;

            last = temp;
            head = head->next;
        }
    }

    bool isPalindrome(ListNode* head) {
        if(!head->next)
            return true;
        
        create(head);

        reverse(NULL,head1);
        int flag = 0 ;
        
        while(head && head1) {

            if(head1->val != head->val) {
                flag = 1;
                break;
            }
            else {
                head = head->next;
                head1 = head1->next;
            }
        }
        if(flag)
            return false;
        else    
            return true;    
    }
};