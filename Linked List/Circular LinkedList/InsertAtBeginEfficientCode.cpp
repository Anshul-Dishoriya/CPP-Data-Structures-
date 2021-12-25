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

Node *InsertAtBegin(Node *head , int n){
	Node *temp = new Node(n);
	if (head == NULL) {
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;
	head->next = temp;

	int t = temp->data;
	temp->data = head->data;
	head->data = t;
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
	head = InsertAtBegin(head , 459);
	head = InsertAtBegin(head , 128);
	head = InsertAtBegin(head , 72);
	head = InsertAtBegin(head , 26);
	head = InsertAtBegin(head , 58);
	head = InsertAtBegin(head , 44);
	head = InsertAtBegin(head , 345);
	head = InsertAtBegin(head , 212);
	head = InsertAtBegin(head , 100);
	cout<<"\nLinked List After : ";
	print_linked_list(head);

	return 0;

}