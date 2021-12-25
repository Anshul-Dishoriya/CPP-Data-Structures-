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
Node *DeleteHead(Node *head ){
	if (head == NULL) {
		
		return NULL;
	}
	if (head->next==NULL){
		delete head;
		return NULL;
	}
	head->data = head->next->data;

	Node *curr = head->next;
	head->next = head->next->next;
	delete curr;
	return head;


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
	head = DeleteHead(head);
	cout<<"\nLinked List After : ";
	print_linked_list(head);

	return 0;

}