#include <iostream>
using namespace std;

struct Node{
	Node *next;
	Node *prev;
	int data;
	Node(int n){
		data = n;
		next = NULL;
		prev = NULL;
	}
};

Node *InsertAtBegin(Node *head ,int n){
	Node *temp = new Node(n);
	if (head == NULL) {
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	temp->next = head;
	temp->prev = head->prev;
	head->prev->next = temp;
	head->prev = temp;
	return temp;
}

Node *InsertAtEnd(Node *head ,int n){
	Node *temp = new Node(n);
	if (head == NULL) {
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	temp->next = head;
	temp->prev = head->prev;
	head->prev->next = temp;
	head->prev = temp;
	return head;
}


void print_linked_list(Node *head) {
	Node *curr = head;
	do{
		cout << curr->data << "  ";
		curr = curr->next;
	}while (curr != head);
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	head->next = head;
	head->prev = head;

	cout<<"\nLinked List is : ";
 	print_linked_list(head);

	head = InsertAtBegin(head , 235);
	head = InsertAtBegin(head , 123);
	head = InsertAtBegin(head , 423);
	head = InsertAtBegin(head , 163);
	head = InsertAtBegin(head , 423);
	head = InsertAtBegin(head , 113);
	head = InsertAtBegin(head , 923);
	head = InsertAtBegin(head , 236);
	head = InsertAtBegin(head , 723);
	
	cout<<"\nLinked List After Insert Nodes at Begining  : ";
 	print_linked_list(head);

 	head = InsertAtEnd(head , 811);
 	head = InsertAtEnd(head , 320);
 	head = InsertAtEnd(head , 294);
 	head = InsertAtEnd(head , 431);
 	head = InsertAtEnd(head , 434);
 	head = InsertAtEnd(head , 546);

 	cout<<"\nLinked List After Insert Nodes at End  : ";
 	print_linked_list(head);
	return 0;
}