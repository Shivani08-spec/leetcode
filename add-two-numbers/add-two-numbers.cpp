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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* i = l1;
        ListNode* j = l2;
        
    ListNode* l3= new ListNode();
        l3->val = (l1->val+l2->val)%10;
        int carry = (l1->val+l2->val)/10;
        l1 = l1->next;
        l2 = l2->next;
          ListNode* k = l3;
        
        while(l1 && l2)
        {
            ListNode* nya = new ListNode();
            
            nya->val = (carry+l1->val+l2->val)%10;
            carry = (carry+l1->val+l2->val)/10;
            
            l3->next= nya;
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;
            
        }
        while(l1)
        {
             ListNode* nya = new ListNode();
            
            nya->val = (carry+l1->val)%10;
            carry = (carry+l1->val)/10;
            
            l3->next = nya;
            l1=l1->next;
            l3 = l3->next;
            
        }
         while(l2)
        {
             ListNode* nya = new ListNode();
            
            nya->val = (carry+l2->val)%10;
            carry = (carry+l2->val)/10;
             
             l3->next = nya;
             l2 = l2->next;
             l3 = l3->next;
        }
        if(carry != 0)
        {
             ListNode* nya = new ListNode();
            
            nya->val = (carry)%10;
            
            l3->next = nya;
            l3 = l3->next;
            
            
        }
        l3->next = NULL;
        
        return k;
    }
};