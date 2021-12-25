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


// Function to Reverse the Doubly Linked List
Node *ReverseDLL(Node *head){
	Node *prev = NULL;
	Node *curr = head;
	if (head==NULL || head->next==NULL) return head;
	while ( curr != NULL ){
		prev = curr->prev;
		curr->prev = curr->next;
		curr->next = prev;
		curr = curr->prev; // At Each Iteration next Becomes prev and prev becomes next so curr->prev means curr->next
	}
	return prev->prev; // here prev->prev because prev points to second last node
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
	
	print_linked_list(head);
	head = ReverseDLL(head);
	print_linked_list(head);

	return 0;
}

