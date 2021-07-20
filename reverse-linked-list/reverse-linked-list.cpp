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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return NULL;
        stack<ListNode*>s;
        while(head)
        {
        s.push(head);
            head = head->next;
        }
        ListNode* newlist = s.top();
        ListNode* temp = newlist;
        s.pop();
        while(!s.empty())
        {
            newlist->next = s.top();
            s.pop();
            newlist = newlist->next;
        }
        newlist->next = NULL;
        return temp;
    }
};