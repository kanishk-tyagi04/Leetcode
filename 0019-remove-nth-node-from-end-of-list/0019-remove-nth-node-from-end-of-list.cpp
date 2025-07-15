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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count=0;
        
        while(temp){
            count++;
            temp=temp->next;
            
        }
        int pos = (count-n)+1;
        ListNode* mock = head;
        ListNode* prev = NULL;
        int c=0;
        if (pos == 1) {
            ListNode* newHead = head->next; 
            delete head;
            return newHead;
        }
    
        while (mock){
            c++;
            if(c==pos){
               prev->next = prev->next->next;
                delete mock;
                break;
            }
            prev = mock;
            mock = mock->next;
            
        }
        return head;
        
    }
};