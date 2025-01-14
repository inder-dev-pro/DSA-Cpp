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
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode*> NodePointer;
        ListNode* curr;
        curr=head;
        if(head==nullptr) {
            return false;
        }

        else if (head->next==nullptr) {
            return false;
        }
        while (curr!=nullptr) {
            if (NodePointer.find(curr)!=NodePointer.end()) {
                return true;
            }
            else {
                NodePointer.insert(curr);
            }
            curr=curr->next;
        }
        return false;
    }
};