#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;           // The data stored in the node
    ListNode* next;    // Pointer to the next node

    // Default constructor
    ListNode() : val(0), next(nullptr) {}

    // Constructor to initialize with a value
    ListNode(int x) : val(x), next(nullptr) {}

    // Constructor to initialize with a value and next pointer
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
            ListNode* dummy = new ListNode(0);
            ListNode* curr = dummy;
            while(list1 && list2){
                if(list1->val > list2->val){
                    curr->next = list2;
                    list2 = list2->next;
                }
                else {
                    curr->next = list1;
                    list1 = list1->next;
                }
                curr = curr->next;
            }
            curr->next = list1? list1 : list2;

            ListNode* head = dummy->next;
            delete dummy;
            return head;
        }

};

ListNode* createList(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Solution solution;

    // Example input lists
    vector<int> arr1 = {1, 4, 6};
    vector<int> arr2 = {2, 3, 5};

    // Create linked lists
    ListNode* list1 = createList(arr1);
    ListNode* list2 = createList(arr2);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    // Merge the two lists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}