#include <iostream>
using namespace std;

struct Node{
	int data;
	Node * next;
	Node (int x) 
	{
		data = x;
		next = NULL;
	}
};
//  Function to Delete Last Node Of the Linked Lists
Node *Delete_Last_Node(Node * ptr)
{	
	if (ptr == NULL) return NULL;

	if (ptr->next == NULL ) {
		delete ptr;
		return NULL;
	} 

	Node *curr = ptr; // Creating Temprory 'curr' Node to keep track of head Node
	while ( curr->next->next != NULL )
	{
		curr  =  curr->next;
	}
	delete curr->next;
	curr->next=NULL;
	return ptr;
}

// Function to insert Node at the begining of the linked list
Node *insert_at_begin(Node * ptr , int n)
{
	Node *head = new Node(n);
	head->next = ptr;
	return head;

}

void traverse(Node *ptr)
{
	if ( ptr == NULL ) cout << "Empty";
	Node *curr = ptr;
	while (curr != NULL)
	{
		cout << curr->data << "  "; 
		curr = curr->next;
	}
}


int main(int argc, char const *argv[])
{
	Node *head = new Node(60);
	head = insert_at_begin(head , 55);
	head = insert_at_begin(head , 50);
	head = insert_at_begin(head , 45);
	head = insert_at_begin(head , 40);
	head = insert_at_begin(head , 35);
	head = insert_at_begin(head , 30);
	head = insert_at_begin(head , 25);
	head = insert_at_begin(head , 20);
	head = insert_at_begin(head , 15);
	head = insert_at_begin(head , 10);
	head = insert_at_begin(head , 5);

	cout<< "\n\nLinked List Before Deletion : ";
	traverse(head);
	cout<<"\n\nLinked List after Deletion : ";
	head = Delete_Last_Node(head);
	traverse(head);
	return 0;
}