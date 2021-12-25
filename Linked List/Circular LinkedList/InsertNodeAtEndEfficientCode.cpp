#include <iostream>
using namespace std;

struct Node{
	Node * next;
	int data;
	Node(int n){
		data = n;
		next =NULL;
	}
};
// Efficient Code to Insert the Node at The End of Linked List At O(1) time;
Node *InsertAtEnd(Node *head , int n){
	Node *temp = new Node(n);
	if (head == NULL) {
		temp->next = temp;
		return temp;
	}
	/*
		Inserting Node at the second position
		then we will swap the data of head and new-node and will
		return new-node(temp) as head node.
	*/ 
	temp->next = head->next;
	head->next = temp;

	// swaping data 
	int t = head->data;
	head->data = temp->data;
	temp->data = t;
	return temp;
}


void print_linked_list(Node *head) {
	Node *curr = head;
	do{
		cout << curr->data << "   ";
		curr = curr->next;
	}while (curr != head);
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(103);
	Node *second = new Node(201);
	Node *third = new Node(350);
	Node *fourth = new Node(411);

	head->next=second;
	second->next = third;
	third->next= fourth;
	fourth->next= head;

	cout<<"\nLinked List Before: ";
	print_linked_list(head);
	head = InsertAtEnd(head , 459);
	head = InsertAtEnd(head , 128);
	head = InsertAtEnd(head , 72);
	head = InsertAtEnd(head , 26);
	head = InsertAtEnd(head , 58);
	head = InsertAtEnd(head , 44);
	head = InsertAtEnd(head , 345);
	head = InsertAtEnd(head , 212);
	head = InsertAtEnd(head , 100);
	cout<<"\nLinked List After : ";
	print_linked_list(head);

	return 0;

}