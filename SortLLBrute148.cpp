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
    ListNode* sortList(ListNode* head) {
        if(!(head)) {return head;}
        vector<int> arr;
        ListNode* temp;
        temp=head;
        while (temp) {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(), arr.end());

        temp=head;
        int i=0;
        while (temp) {
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};