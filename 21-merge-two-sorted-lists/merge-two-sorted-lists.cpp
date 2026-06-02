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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1= list1;
        ListNode* temp2= list2;
        if(!temp1 && !temp2) return nullptr;
        if(!temp1) return list2;
        if(!temp2) return list1;
        ListNode* head=new ListNode();
        if((temp2->val) > (temp1->val)){
            head->val=(temp1->val);
            temp1=temp1->next;
        }
        else{
            head->val=(temp2->val);
            temp2=temp2->next;
        }
        ListNode* temp=head;
        while(temp1 && temp2){
            ListNode* node = new ListNode;
            temp->next= node;
            if(temp2->val>temp1->val){
                node->val=temp1->val;
                temp1=temp1->next;
            }
            else{
                node->val=temp2->val;
                temp2=temp2->next;
            }
            temp=node;
        }
        while(temp1){
            ListNode* node = new ListNode;
            node->val=temp1->val;
            temp1=temp1->next;
            temp->next=node;
            temp=node;
        }
        while(temp2){
            ListNode* node = new ListNode;
            node->val=temp2->val;
            temp2=temp2->next;
            temp->next=node;
            temp=node;
        }
        return head;
    }
};