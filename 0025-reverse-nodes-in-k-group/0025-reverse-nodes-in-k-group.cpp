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
    bool check(ListNode*node,int k){
        int count=0;
        while(node!=nullptr && count<k){
            node=node->next;
            count++;
        }
        return count==k;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!check(head,k)){
            return head;
        }
        ListNode * pre=nullptr;
        ListNode * curr=head;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            ListNode*next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        temp->next=reverseKGroup(curr,k);
        return pre;
    }
};