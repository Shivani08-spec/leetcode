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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n=0,m=0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1){
            n++;
            temp1=temp1->next;
        }
        while(temp2){
            m++;
            temp2= temp2->next;
        }
        temp1 = headA,temp2 = headB;
        if(n>m){
            while(n>m){
                temp1 = temp1->next;
                n--;
            }
            while(temp1&&temp2 &&temp1!= temp2){
                temp1= temp1->next;
                temp2= temp2->next;
            }
            return temp1;
        }
        else{
            
            while(n<m){
                temp2 = temp2->next;
                m--;
            }
            while(temp1&&temp2 &&temp1!= temp2){
                temp1= temp1->next;
                temp2= temp2->next;
            }
            return temp1;
        }
    }
};