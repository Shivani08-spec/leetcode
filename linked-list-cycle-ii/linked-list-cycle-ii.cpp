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
    ListNode *detectCycle(ListNode *head) {
        ListNode* i = head;
        ListNode* j = head;
        int flag = 0;
        
        while(i && j && j->next)
        {
            i= i->next;
            j = j->next->next;
            
            if(i == j)
            {
                
            break;
          }
            
        }
        if(i==NULL || j == NULL||j->next == NULL )
            return NULL;
        
        i = head;
        while(i != j)
        {
            i=i->next;
            j=j->next;
            
        }
        return i;
        
    }
};

 