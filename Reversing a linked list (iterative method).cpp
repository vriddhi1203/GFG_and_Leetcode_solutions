//.........Iterative method to reverse the linked list.....................//
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
};

void reverse(Node** head){
	Node* current=*head;
	Node* prev=NULL;
	Node* next=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}

void push(Node** head_ref,int new_data){
	Node* temp=new Node();
    temp->data=new_data;
	temp->next=*head_ref;
	*head_ref=temp;
}

void printlinkedlist(Node* pointer){
	while(pointer!=NULL){
		cout<<pointer->data<<" ";
		pointer=pointer->next;
	}
}

int main(){
	Node* head=NULL;
	push(&head,20);
	push(&head,4);
	push(&head,15);
	push(&head,85);
	cout<<"Linked list before reversal is:"<<endl;
	printlinkedlist(head);
	reverse(&head);
    cout<<endl;
	cout<<"Linked list after reversal is:"<<endl;
	printlinkedlist(head);
	return 0;
}