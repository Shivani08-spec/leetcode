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
        ListNode* curr = head,*nya = head;
        int count = 0;
        if(head->next==NULL){
            return NULL;
        }
        
        while(count < n){
            curr = curr->next;
            count++;
        }
        
        if(curr == NULL) return head->next;
        while(curr->next){
                
                nya = nya->next;
               curr = curr->next;
            
        }
        
        nya->next = nya->next->next;
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        /*ListNode *first =head;              // Slow pointer
        ListNode* second = head;         //fast pointer that will be moved first.
		//moving fast pointer till N nodes.
        for (int i = 0; i < n; i++) {
            second = second->next;
        }
        
		/*checking if fast pointer reaches the end of the list as it means number of nodes in list is equal to n.
        if(second == NULL) return head->next;
        
		/*moving till last pointer reaches the end node that will make the slow pointer point to the node to be deleted.
        while(second->next) {
            first = first->next;
            second = second->next;
        }
        //deleting the node that is pointed by the slow pointer.
        ListNode* temp = first->next;
        first->next = first->next->next;
        delete temp;
        return head;*/
    }
};