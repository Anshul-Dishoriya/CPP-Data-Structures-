#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *next;

	Node(int x) {
		data = x ;
		next = NULL;
	}
};
// Function to Traverse the Linked List
void print_linked_list(Node *head) {
	Node *curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}


Node* Insert_end(Node *ptr , int n) { //head pointer the First Node
	
	Node *new_node = new Node(n);
	if (ptr == NULL) return new_node;
	Node *curr = ptr;
	while (curr->next!=NULL){
		curr = curr->next;
	}
	curr->next = new_node;
	return ptr;
}
// Driver Function 
int main(int argc, char const *argv[])
{
	Node *head = NULL;
	
	cout << "Linked List  : " << endl;
	head = Insert_end(head , 5);
	head = Insert_end(head , 12);
	head = Insert_end(head , 42);
	head = Insert_end(head , 55);
	head = Insert_end(head , 563);
	head = Insert_end(head , 430);
	print_linked_list(head);


	return 0 ;
}