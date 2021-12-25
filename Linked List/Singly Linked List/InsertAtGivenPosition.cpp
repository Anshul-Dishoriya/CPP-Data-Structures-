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
// Function to Traverse the Linked List
void print_linked_list(Node *head) {
	Node *curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

Node *InsertAtGivenPosition(Node *ptr , int pos , int val)
{
	Node * temp = new Node(val);
	if (pos == 1) {
		temp->next = ptr ;
		return temp;
	}
	Node * curr = ptr;
    for (int i=0 ; i<=pos-2 && curr!=NULL ; i++){
		curr = curr->next;
	}
	if (curr==NULL){
		return ptr;
	}
	temp->next = curr->next;
	curr->next = temp;
	return ptr;

}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	cout << "Linked List  Before Insertion : " << endl;
	print_linked_list(head);

	head = InsertAtGivenPosition(head , 1 , 30);
	head = InsertAtGivenPosition(head , 2 , 12);
	head = InsertAtGivenPosition(head , 2 , 42);
	head = InsertAtGivenPosition(head , 2 , 55);
	head = InsertAtGivenPosition(head , 5 , 563);
	head = InsertAtGivenPosition(head , 1 , 430);

	cout<<"Linked List After Insertion :  "<<endl;

	print_linked_list(head);
	return 0 ;
	
}