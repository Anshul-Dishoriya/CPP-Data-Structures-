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

void print_linked_list(Node *head) {
	Node *curr = head;
	cout<<"Linked List : ";
	do{
		cout << curr->data << "   ";
		curr = curr->next;
	}while (curr != head);
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	Node *fourth = new Node(40);

	head->next=second;
	second->next = third;
	third->next= fourth;
	fourth->next= head;

	cout<<"Linked List : ";
	print_linked_list(head);
	return 0;
}