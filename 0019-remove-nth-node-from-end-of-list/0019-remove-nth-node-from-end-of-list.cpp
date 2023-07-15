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
        ListNode* temp=head;
        int count=0;
        if(head->next==NULL) return NULL;
        while(temp!=NULL) {
            temp=temp->next;
            count++;
        }
        count-=n;
        temp=head;
        if(count==0) return head->next;
        while(temp!=NULL) {
            if(count==1) {
                temp->next=temp->next->next;
            }
            count--; 
            temp=temp->next;
            
        }
        return head;
    }
};