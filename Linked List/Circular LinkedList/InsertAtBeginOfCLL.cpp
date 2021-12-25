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
	Node *curr = head;
	while (curr->next!=head){
		curr = curr->next;
	}
	curr->next =temp;
	temp->next = head;
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
	Node *head = new Node(10);
	head->next = head;

	cout<<"\nLinked List Before: ";
	print_linked_list(head);
	head = InsertAtBegin(head , 9);
	head = InsertAtBegin(head , 8);
	head = InsertAtBegin(head , 7);
	head = InsertAtBegin(head , 6);
	head = InsertAtBegin(head , 5);
	head = InsertAtBegin(head , 4);
	head = InsertAtBegin(head , 3);
	head = InsertAtBegin(head , 2);
	head = InsertAtBegin(head , 1);
	cout<<"\nLinked List After : ";
	print_linked_list(head);

	return 0;

}