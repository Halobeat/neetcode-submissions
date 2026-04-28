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
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        if (head->next == head) {
            return true;
        }
        unordered_set<ListNode*> hashptr{};
        ListNode* tmp = head;
        while(tmp->next != nullptr) {
            if (hashptr.find(tmp) == hashptr.end()) {
                hashptr.insert(tmp);
            } else {
                return true;
            }
            tmp = tmp->next;
        }
        return false;
    }
};
