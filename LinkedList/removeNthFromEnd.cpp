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
 int LengthOfLL(ListNode* Sarr){
    ListNode* temp = Sarr;
    int cnt=1;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int lambai = LengthOfLL(head);
        ListNode* prev;
        ListNode* temp = head;
        if(temp == NULL){
            return head;
        }
        if(lambai-n == 1){
            head = temp->next;

            return head;
        }
        for(int i =1;i!=lambai-n;i++){
            prev = temp;
            temp = temp->next;
        }

        if(temp != NULL){
            prev->next = temp->next;
            
        }
        return head;
    }
};