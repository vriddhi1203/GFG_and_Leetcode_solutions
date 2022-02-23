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
        int count=0;
        ListNode* ptr=head;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        if(count==1 and n==1)
            return NULL;
        if(count==n){
            ListNode* ans=ptr->next;
            return ans;
        }
        int num=count-n;
        int i=1;
        while(i<num){
            ptr=ptr->next;
            i++;
        }
        ptr->next=ptr->next->next;
        return head;
    }
};