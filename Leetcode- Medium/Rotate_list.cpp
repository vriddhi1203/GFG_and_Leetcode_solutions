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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        int count=0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count++;
        ListNode* ptr=head;
        temp->next=head;
        int modu=k%count;
        count=count-modu;
        int i=1;
        while(i<count){
            ptr=ptr->next;
            i++;
        }
        head=ptr->next;
        ptr->next=NULL;
        return head;
    }
};