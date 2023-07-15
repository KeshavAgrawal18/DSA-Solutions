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
        ListNode* head=l1,* prev;
        int t=0;
        while(l1!=NULL && l2!=NULL){
            l1->val+=t+l2->val;
            t=0;
            if(l1->val > 9) t=1;
            l1->val %= 10;
            prev=l1;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL ){
            prev->next=l2;
        } 
        l1=prev->next;
        while(l1!=NULL){
            l1->val+=t;
            t=0;
            if(l1->val > 9) t=1;
            l1->val %= 10;
            if(l1->next==NULL && t!=0){
                ListNode* new_node = new ListNode();
                new_node->val=t;
                t=0;
                l1->next=new_node;
                l1=l1->next;
                return head;
            }
            l1=l1->next;
        }
        if(t!=0) {
            ListNode* new_node = new ListNode();
                new_node->val=t;
                t=0;
                prev->next=new_node;
        }
        return head;
    }
};