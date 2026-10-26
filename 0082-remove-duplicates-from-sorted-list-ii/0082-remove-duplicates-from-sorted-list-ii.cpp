class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = head;
        ListNode* temp = &dummy;

        while (curr != nullptr) {
            bool duplicate = false;

            while (curr->next != nullptr &&
                   curr->val == curr->next->val) {
                duplicate = true;
                curr = curr->next;
            }

            if (duplicate) {
                temp->next = curr->next;
            } else {
                temp = curr;
            }

            curr = curr->next;
        }

        return dummy.next;
    }
};
