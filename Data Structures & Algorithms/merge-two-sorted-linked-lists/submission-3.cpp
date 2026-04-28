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
    void addNodeAtTheEnd(ListNode* &head, ListNode data) {
        ListNode* targetData = new ListNode{data.val};
        if (head == nullptr) {
            head = targetData;
            head->next = nullptr;
            return;
        }
        ListNode* tmp = head;
        while (tmp->next != nullptr && tmp != nullptr) {
            tmp = tmp->next;
        }
        if (tmp != nullptr) {
            tmp->next = targetData;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode* dummy = nullptr;
        while(list1 && list2) {
            if (list1->val <= list2->val) {
                addNodeAtTheEnd(dummy, *list1);
                list1 = list1->next;
            } else {
                addNodeAtTheEnd(dummy, *list2);
                list2 = list2->next;
            }
        }
        while (list1) {
            addNodeAtTheEnd(dummy, *list1);
            list1 = list1->next;
        }
        while (list2) {
            addNodeAtTheEnd(dummy, *list2);
            list2 = list2->next;
        }
        return dummy;
    }
};
