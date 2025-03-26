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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* smallP = small;

        ListNode* large = new ListNode(0);
        ListNode* largeP = large;

        ListNode* curr = head;

        while(curr != nullptr){
            if(curr->val < x){
                smallP->next = curr;
                smallP = smallP->next;
            } else {
                largeP->next = curr;
                largeP = largeP->next;
            }
            curr = curr->next;
        }

        largeP->next = nullptr; 
        smallP->next = large->next; 

        return small->next;
    }
};