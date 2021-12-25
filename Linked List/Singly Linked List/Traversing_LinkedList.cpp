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
		cout << curr->data << endl;
		curr = curr->next;
	}
}

void recursive_traversal(Node *head) {
	if (head != NULL) {
		cout << head->data << endl;
		head = head->next;
		recursive_traversal(head);
	}
	return ;
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);

	// print_linked_list(head);
	recursive_traversal(head);
	return 0;
}