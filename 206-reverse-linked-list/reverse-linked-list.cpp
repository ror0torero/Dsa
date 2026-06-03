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
        if(head==NULL) return head;
        ListNode* head1=new ListNode();
        ListNode *temp=head;
        while(temp){
            if(temp==head){
                head1->val=temp->val;
            }
            else{
                ListNode* node= new ListNode(temp->val);
                node->next=head1;
                head1=node;
            }
            temp=temp->next;
        }
        return head1;
    }
};