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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1;
        ListNode* curr2;
        ListNode* dummy=new ListNode();
        ListNode* curr3=dummy;
        curr1=list1;
        curr2=list2;

        while (curr1!=nullptr && curr2!=nullptr) {
            if ((curr1->val)<(curr2->val)) {
                curr3->next=curr1;
                curr1=curr1->next;
            }
            else {
                curr3->next=curr2;
                curr2=curr2->next;
            }

            curr3=curr3->next;
        }

        if (curr1!=nullptr) {
            curr3->next=curr1;
        }
        else{
            curr3->next=curr2;
        }

        return dummy->next;
    }
};