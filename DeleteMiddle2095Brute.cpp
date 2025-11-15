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
    ListNode* deleteMiddle(ListNode* head) {
        if (head==nullptr || head->next==nullptr) {
            
            return nullptr;}
        ListNode* temp;
        temp=head;
        int size=0;
        while (temp) {
            size++;
            temp=temp->next;
        }

        temp=head;
        int mid=size/2;

        for (int i=0;i<mid-1; i++) {
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head;
    }
};