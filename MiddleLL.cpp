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
    ListNode* middleNode(ListNode* head) {
        ListNode* next;
        ListNode* curr;

        curr=head;
        int count=0;
        while (curr!=nullptr) {
            curr=curr->next;
            count+=1; 
        }
        int mid=count/2;
        int start=0;
        curr=head;
        while (start<mid) {
            curr=curr->next;
            start+=1;
        }

        return curr;
    }
};