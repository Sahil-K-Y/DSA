
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int A = 0, B = 0;

        ListNode* left = headA;
        ListNode* right = headB;

        while (left != nullptr) {
            A++;
            left = left->next;
        }

        while (right != nullptr) {
            B++;
            right = right->next;
        }

        int diff = abs(A - B);

        if (A > B) {
            while (diff > 0) {
                headA = headA->next;
                diff--;
            }
        } else {
            while (diff > 0) {
                headB = headB->next;
                diff--;
            }
        }

        while (headA != nullptr && headB != nullptr) {
            if (headA == headB) {
                return headA;
            }

            headA = headA->next;
            headB = headB->next;
        }

        return nullptr;
    }
};
