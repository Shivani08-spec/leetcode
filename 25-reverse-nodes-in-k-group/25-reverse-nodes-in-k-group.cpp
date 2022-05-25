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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
         //base condition
        //to not reverse the last group which is less than k
        ListNode* temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==nullptr)
                return head;
            temp=temp->next;
        }
        ListNode*  curr = head;
        ListNode*  prev = NULL;
        ListNode*  nex;
        int c =0;
        while(curr && c<k){
            
            nex = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = nex;
            c++;
        }
        
        if(nex!=NULL){
            head->next = reverseKGroup(curr,k);
        }
        return prev;
    }
};