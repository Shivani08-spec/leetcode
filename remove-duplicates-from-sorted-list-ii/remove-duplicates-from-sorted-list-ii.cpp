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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* begin = (ListNode*)malloc(sizeof(ListNode));
        begin->val = 0;
        begin->next = head;
        ListNode* origin = begin;
        
        while(begin && begin->next)
        {
            ListNode* temp = begin->next;
        int prev;
             
            if(begin->next && begin->next->next && begin->next->val == begin->next->next->val)
            {
               prev = begin->next->val;
                begin->next = begin->next->next;
                
                
                delete temp;
                continue;

            }
            if(begin->next->val == prev )
            {
                begin->next = begin->next->next;
            }
            
            
                else{
                    begin = begin->next;
                }
            
            
            
        
            
        }
        return origin->next;
        
    }
    
};