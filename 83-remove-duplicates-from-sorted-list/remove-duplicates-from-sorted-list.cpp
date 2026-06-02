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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        if(temp->next==nullptr) return head;
        ListNode* tempn;
        tempn=temp->next;
        while(tempn){
            if(temp->val==tempn->val){
                *temp=*tempn;
                tempn=tempn->next;
                continue;
            }
            temp=temp->next;
            tempn=tempn->next;
        }
        return head;
    }
};