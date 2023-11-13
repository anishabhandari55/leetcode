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
    void deleteNode(ListNode* node) {
        ListNode *p=node;
        p->val=p->next->val;//copying the data of next node to the currently pointed node
        p->next=p->next->next; //make the current node point on next's next. 
        return;
    }
};