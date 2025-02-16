/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1;
        ListNode* curr2;
        curr1=headA;
        curr2=headB;
        while (curr1!=curr2) {
            curr1=curr1 ? curr1->next : headA;
            curr2=curr2 ? curr2->next : headB;
        };

        return curr1;
    }
};