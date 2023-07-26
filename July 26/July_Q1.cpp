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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head,*last;

        if(list1 && !list2)
            return list1;
        else if(!list1 && list2)    
            return list2;
        else if(!list1 && !list2)
            return NULL;    

        else if(list1 && !list1->next && list2 && !list2->next) {
            if(list1->val <= list2->val) {
                head = list1;
                head->next = list2;
            }
            else {
                head = list2;
                head->next = list1;
            }  
        }
        else {
                if(list1->val <= list2->val) {
                    head = list1;
                    list1 = list1->next;
                    last = head;
                }
                else {
                    head = list2;
                    list2 = list2->next;
                    last = head;
                }
            while(list1 && list2) {
                if(list1->val <= list2->val) {
                    last->next = list1;
                    last = list1;
                    list1 = list1->next;
                }
                else {
                    last->next = list2;
                    last = list2;
                    list2 = list2->next;
                }
            }
            if(list1)
                last->next = list1;
            else if(list2)
                last->next = list2;
        }
        return head;      
    }
};