#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
};

void insertafter(Node* prev_node,int new_data){
	if(prev_node==NULL){
		cout<<"The given previous node cannot be null";
		return;
	}
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}

void append(Node** head_ref,int new_data){
	Node* last=*head_ref;
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=NULL;
	 if(*head_ref==NULL){ //if linked list is empty initially
	 	*head_ref=new_node;
	 	return;
	 }
	while(last->next!=NULL){
		last=last->next;
	} 
	last->next=new_node;
	return;
}

void push(Node** head_ref,int new_data){
	Node* new_node=new Node(); //allocated the memory in the form a node
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}

void printlinkedlist(Node* node){
	cout<<"Created linked list is:"<<endl;
	while(node!=NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
}

int main(){
	Node* head=NULL; //a pointer which would store value of a node data type
	push(&head,6); //inserting 6 in beginning
	push(&head,7); //inserting 7 in beginning
	push(&head,1); //inserting 1 in beginning
	append(&head,4); //inserting 4 at the last
	insertafter(head->next,8); //inserting 8 after 7
	printlinkedlist(head);
	return 0;
}
