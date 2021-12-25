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
	Node *temp  = head;
	while (head->next!=NULL){
		head=head->next;
	}		
	delete head;
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


Node *Delete_Last_Node(Node *head){
	if (head==NULL) return NULL;
	if (head->next==NULL){
		delete head;
		return NULL;
	}
	Node *curr = head;
	while (curr->next!=NULL){
		curr = curr->next;
	}
	curr->prev->next = NULL;
	delete curr;
	return head;

}

int main(int argc, char const *argv[])
{
	Node * head = NULL ;  // Initlizeing head with NULL 
	head = InsertAtBegin( head , 5  );
	head = InsertAtBegin( head , 10 );
	head = InsertAtBegin( head , 20 );
	head = InsertAtBegin( head , 30 );
	head = InsertAtBegin( head , 40 );
	head = InsertAtBegin( head , 50 );
	cout<<"\n\nBefore Deleting Last Node ";
	print_linked_list(head);
	head = Delete_Last_Node(head);
	cout<<"\nAfter Deleting Last Node ";
	print_linked_list(head);

	return 0;
}

