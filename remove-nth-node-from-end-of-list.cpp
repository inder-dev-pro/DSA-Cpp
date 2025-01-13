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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr;
        curr=head;
        int count=0;
        while (curr!=nullptr) {
            curr=curr->next;
            count+=1;
        }
        int node=count-n;
        if (count==n) {
            return head->next;
        }
        curr=head;
        count=1;

        while(count<node) {
            curr=curr->next;
            count++;
        }
        curr->next=curr->next->next;
        return head;
    }
};