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
Node *InsertAtEnd(Node *head , int n){
	Node * temp =new Node(n); // Creating a New Node 
	if (head == NULL) return temp;

	Node *curr = head;
	while ( curr->next !=NULL ){ // we are adding curr->next  because be want to reach the last Node 
		curr = curr->next;  	 // if we will remove ->next then the curr will become NULL 
	}
	curr->next = temp;
	temp->prev = curr;
	return head;
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
	head = InsertAtEnd(NULL , 5);
	head = InsertAtEnd(head , 10);
	head = InsertAtEnd(head , 20);
	head = InsertAtEnd(head , 30);
	head = InsertAtEnd(head , 40);
	head = InsertAtEnd(head , 50);
	
	print_linked_list(head);
	ReverseLL(head);

	return 0;
}

