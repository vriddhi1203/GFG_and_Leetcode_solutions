class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head==NULL)
            return NULL;
        int count=0;
        Node* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count++;
        Node* ptr=head;
        temp->next=head;
        int i=1;
        while(i<k){
            ptr=ptr->next;
            i++;
        }
        head=ptr->next;
        ptr->next=NULL;
        return head;
    }
};