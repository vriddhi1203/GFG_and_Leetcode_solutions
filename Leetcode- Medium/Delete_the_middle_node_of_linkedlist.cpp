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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
            count++;
        }
        if(count==0)
            return NULL;
        ptr=head;
        if(count%2!=0){
            count/=2;
            count++;
        }
        else
            count/=2;
        int i=0;
        while(i<count-1){
            ptr=ptr->next;
            i++;
        }
        ptr->next=ptr->next->next;
        return head;
    }
};