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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* current=head;
        int n=0;
        int carry=0;
        while (l1!=NULL || l2!=NULL || carry!=0) {
            n=carry;
            if (l1!=NULL) {
                n+=l1->val;
                l1=l1->next;
            }
            if (l2!=NULL) {
                n+=l2->val;
                l2=l2->next;
            }
            carry=int(n/10);
            current->next=new ListNode(n%10);
            current=current->next;

        }

        return head->next;
    }
};