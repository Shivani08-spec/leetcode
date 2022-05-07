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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* p = head;
        int size = 1;
        if(head==NULL)
            return head;
        while(temp&&temp->next){
            temp = temp->next;
            size++;
        }
        k%=size;
        while(size-1>k){
            p = p->next;
            size--;
            
        }
        temp->next = head;
        temp =p->next ;
        p->next = NULL;
        head= temp;
        return head;
        
        
        
        
    }
};