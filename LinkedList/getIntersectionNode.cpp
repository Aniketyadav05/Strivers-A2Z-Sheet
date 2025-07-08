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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode *dummyA = headA;
            ListNode *dummyB = headB;
            while(dummyA != dummyB){
                dummyA = dummyA->next;
                dummyB = dummyB->next;
                if(dummyA == dummyB){
                    return dummyA;
                }
                if(dummyA == NULL){
                    dummyA = headA;
                }
                if(dummyB == NULL){
                    dummyB = headB;
                }
                
            }
            return dummyA;
        }
    };