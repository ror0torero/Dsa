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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode *prev= &dummy;
        ListNode* cur=head;
        while(cur){
            if(cur->val==val){
                prev->next=cur->next;
            }
            else{
                prev=prev->next;
            }
            cur=cur->next;
        }
        return dummy.next;
    }
};