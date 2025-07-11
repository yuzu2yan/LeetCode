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
        ListNode* head = new ListNode();
        ListNode* current = head;
        ListNode* current1 = list1;
        ListNode* current2 = list2;
        while (current1 != nullptr && current2 != nullptr) {
            if (current1->val < current2->val) {
                current->next = current1;
                current1 = current1->next;
            }
            else {
                current->next = current2;
                current2 = current2->next;
            }
            current = current->next;
        }
        if (current1 != nullptr) {
            current->next = current1;
        }
        else {
            current->next = current2;
        }
        return head->next;
    }
};