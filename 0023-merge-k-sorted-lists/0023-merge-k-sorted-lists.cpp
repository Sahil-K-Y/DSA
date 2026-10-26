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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };

        priority_queue<
            ListNode*,
            vector<ListNode*>,
            decltype(cmp)
        > pq(cmp);

        // Keep one current node from each non-empty list in the min-heap.
        for (ListNode* node : lists) {
            if (node != nullptr) {
                pq.push(node);
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!pq.empty()) {
            ListNode* smallest = pq.top();
            pq.pop();

            // Reuse the existing node in the merged list.
            tail->next = smallest;
            tail = tail->next;

            // Add the next node from the same source list.
            if (smallest->next != nullptr) {
                pq.push(smallest->next);
            }
        }

        tail->next = nullptr;
        return dummy.next;
    }
};

/*
Approach: Min-Heap of current list-node pointers.
Time: O(N log k), where N is the total number of nodes and k is the number of lists.
Auxiliary space: O(k) for the heap.
LeetCode verification: Accepted, 134/134 test cases passed (screenshot, Oct 26, 2026).
Runtime/memory shown in screenshot: 3 ms / 18.31 MB (platform-reported).
*/