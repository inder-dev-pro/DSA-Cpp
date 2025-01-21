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
    ListNode* reverseList(ListNode* head) {
        ListNode* next=nullptr;
        ListNode* curr=head;
        ListNode* prev=nullptr;

        while (curr!=nullptr) {
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }

        return prev;
    }

    ListNode* KthNode(ListNode* curr, int k) {
        while (k>1 && curr!=nullptr) {
            curr=curr->next;
            k--;
        }    
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* groupPrev=&dummy;

        while (true) {
            ListNode* Kth=KthNode(groupPrev->next, k);
            if (Kth==nullptr) break;
            ListNode* groupNext=Kth->next;
            ListNode* groupHead=groupPrev->next;
            Kth->next=nullptr;
            ListNode* newgroupHead=reverseList(groupHead);
            groupPrev->next=newgroupHead;
            groupHead->next=groupNext;
            groupPrev=groupHead;
        }

        return dummy.next;
    }
};