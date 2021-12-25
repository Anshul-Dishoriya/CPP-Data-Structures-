#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node *prev;
	Node (int n ){
		data = n;
		next = NULL;
		prev = NULL;
	}
};
// Function To insert A Node at Begining Of the Linked List
Node *InsertAtBegin(Node *head , int n){
	Node * temp =new Node(n);
	if (head == NULL) return temp;

	temp->next = head;
	head->prev = temp;
	return temp;
}

// Function to Traverse the Linked List
void print_linked_list(Node *head) {
	Node *curr = head;
	cout<<"Linked List : ";
	while (curr != NULL) {
		cout << curr->data << "   ";
		curr = curr->next;
	}
}


Node*DeleteHead(Node *head){
	if (head==NULL) return NULL;
	if (head->next==NULL){
		delete head;
		return NULL;
	}

	Node *temp = head->next;
	temp->prev=NULL;
	delete head;
	

	return temp;
}

int main(int argc, char const *argv[])
{
	Node * head = NULL ;  // Initlizeing head with NULL 
	head = InsertAtBegin(head , 5);
	head = InsertAtBegin(head , 10);
	head = InsertAtBegin(head , 20);
	head = InsertAtBegin(head , 30);
	head = InsertAtBegin(head , 40);
	head = InsertAtBegin(head , 50);
	cout<<"\n\nBefore Deleting Head Node ";
	print_linked_list(head);
	head = DeleteHead(head);
	cout<<"\nAfter Deleting Head Node ";
	print_linked_list(head);

	return 0;
}

