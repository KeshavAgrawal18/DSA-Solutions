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
    ListNode* middleNode(ListNode* head) {
//         ListNode* cur=head,* prev=NULL,* nxt;
//         while(cur!=NULL){
//             nxt=cur->next;
//             cur->next=prev;
//             prev=cur;
//             cur=nxt;
//         }
//         if(prev==head) return head;
//         while(prev!=NULL){
//             if(prev->)
            
//         }
        ListNode* cur=head;
        int n=0;
        while(cur!=NULL){
            n++;
            cur=cur->next;
        }
        n=(n/2)+1;cur=head;
        while(cur!=NULL){
            n--;
            if(n==0) return cur;
            cur=cur->next;
        }
       return head; 
    }
};