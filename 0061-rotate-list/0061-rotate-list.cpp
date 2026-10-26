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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)return head;
        ListNode*tail=head;
        int n=1;
        while(tail->next!=nullptr){
            tail=tail->next;
            n++;

        }
        if(k==0)return head;
        tail->next=head;
        k=k%n;
        ListNode*curr=head;
        for(int i=1;i<n-k;i++){
            curr=curr->next;
        }
        ListNode*newhead=curr->next;
        curr->next=nullptr;
        return newhead;
    }
};