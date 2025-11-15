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
    ListNode* oddEvenList(ListNode* head) {
        //condition for empty ll
        if (head==nullptr || head->next==nullptr) {
            return head;
        }
        ListNode* otemp;
        ListNode* etemp;
        ListNode* temp;
        otemp=head;
        etemp=head->next;
        temp=etemp;
        while (etemp!=nullptr && etemp->next!=nullptr) {
            otemp->next=otemp->next->next;
            etemp->next=etemp->next->next;
            otemp=otemp->next;
            etemp=etemp->next;
        }
        otemp->next=temp;
        return head;
    }
};