#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *next;

	Node(int x) {
		data = x ;
		next = NULL;
	}
};

void print_linked_list(Node *head) {
	Node *curr = head;
	while (curr != NULL) {
		cout << curr->data << "  ";
		curr = curr->next;
	}
}


Node* Insert_end(Node *ptr , int n) { //head pointer the First Node

	Node *new_node = new Node(n);
	if (ptr == NULL) return new_node;
	Node *curr = ptr;
	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = new_node;
	return ptr;
}

void RemoveDuplicates(Node *head) {
	Node *curr = head;
	while (curr != NULL && curr->next != NULL)
	{
		if (curr->data == curr->next->data)
		{
			Node *temp = curr->next;
			curr->next = curr->next->next;
			delete temp;
		
		}
		else {
			curr = curr->next;
		}
	}
}


int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	Insert_end(head , 20);
	Insert_end(head , 20);
	Insert_end(head , 30);
	Insert_end(head , 30);
	Insert_end(head , 40);
	Insert_end(head , 40);
	Insert_end(head , 40);
	Insert_end(head , 50);
	Insert_end(head , 50);
	Insert_end(head , 50);
	Insert_end(head , 50);
	Insert_end(head , 70);
	cout << "Linked List Before Deleteing Duplicates : ";
	print_linked_list(head);
	cout << "\nLinked List After Deleteing Duplicates : ";
	RemoveDuplicates(head);
	print_linked_list(head);
	return 0;
}