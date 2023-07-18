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
        ListNode *temp = headA;
        while(headB!=NULL){
            while(temp!=NULL){
                if(temp==headB) return temp;
                temp=temp->next;
            }
            temp=headA;
            headB=headB->next;
        }
        return 0;
        
    }
};