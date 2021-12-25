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
	cout<<endl;
}


void ReverseLL(Node *head){
	Node *curr = head;
	while (curr != NULL){
		if (curr->next == NULL) break;
		curr = curr->next;
	}
	cout<<"Reversed Linked List is :  ";
	
	while (curr!=NULL){
		cout<<curr->data<<"   ";
		curr = curr->prev;
	}
}

int main(int argc, char const *argv[])
{
	Node * head = NULL ;  // Initlizeing head with NULL 
	head = InsertAtBegin(NULL , 5);
	head = InsertAtBegin(head , 10);
	head = InsertAtBegin(head , 20);
	head = InsertAtBegin(head , 30);
	head = InsertAtBegin(head , 40);
	head = InsertAtBegin(head , 50);
	
	print_linked_list(head);
	ReverseLL(head);

	return 0;
}

