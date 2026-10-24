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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) {
            return head;
        }

        ListNode* tail = head;
        ListNode* newhead = nullptr;
        ListNode* pre = nullptr;

        for (int i = 1; i < left; i++) {
            pre = tail;
            tail = tail->next;
        }

        newhead = pre;

        ListNode* curr = nullptr;
        ListNode* prev = nullptr;
        ListNode* start = tail;

        for (int i = 0; i <= right - left; i++) {
            curr = tail->next;
            tail->next = prev;
            prev = tail;
            tail = curr;
        }

        if (newhead != nullptr) {
            newhead->next = prev;
        } else {
            head = prev;
        }

        start->next = tail;

        return head;
    }
};
