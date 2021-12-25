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


Node* Insert_Begin(Node *ptr , int n) { //head pointer the First Node
	Node *head = new Node(n);
	head -> next = ptr;
	return head;


}

int main(int argc, char const *argv[])
{
	Node *head = new Node(100);
	head->next = new Node(30);
	head->next->next = new Node(40);
	head->next->next->next = new Node(10);

	cout << "Linked List Before Insertion : " << endl;
	print_linked_list(head);

	cout << "Linked List After Insertion : " << endl;
	head = Insert_Begin(head , 5);
	head = Insert_Begin(head , 12);
	head = Insert_Begin(head , 42);
	head = Insert_Begin(head , 55);
	head = Insert_Begin(head , 563);
	head = Insert_Begin(head , 430);
	print_linked_list(head);


	return 0;
}


