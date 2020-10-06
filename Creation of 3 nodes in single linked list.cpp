//......Creation of 4 nodes in a single linked list.................//

#include <iostream>
using namespace std;
class Node {
	public:
	int data;
	Node* next;
};

int main(){
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();

	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = fourth;
	fourth->data = 4;
	fourth->next = NULL;
	return 0;
}
