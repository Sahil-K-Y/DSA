/**
 * LeetCode 19 — Remove Nth Node From End of List
 * Approach: Dummy node + length counting
 * Time: O(N)
 * Auxiliary space: O(1)
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        int count = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        count -= n;
        curr = &dummy;

        while (count > 0) {
            curr = curr->next;
            count--;
        }

        curr->next = curr->next->next;
        return dummy.next;
    }
};