/*
	In this solution we are going to maintain two nodes at time slow and fast.
	slow moves 1 at a time where fast moves nodes at time so that when we fast reches 
	to last node slow reaches to the middle. thats how we find the middle in efficient manner.
*/
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
		cout << curr->data << "  ";
		curr = curr->next;
	}
}

// Function to insert the Node in singly Linked list in sorted order 
Node *InsertionSort(Node *head , int n) { //head pointer the First Node
	
	Node *temp = new Node(n);
	if (head == NULL) return temp;
	if (n < head->data){
		temp->next = head;
		return temp;
	}
	Node *curr = head;
	while ( curr->next!=NULL && n > curr->next->data ){
		curr = curr->next;
	}
	temp->next = curr->next;
	curr->next = temp;
	return head;
}

void MiddleOfSLL(Node *head){
	if (head == NULL) return ;
	Node *slow  = head;
	Node *fast  = head;
	while (fast!=NULL || fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"Middle of Linked List is : "<<slow->data;
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
	cout << "Linked List In Sorted Order is : " ;
	head = InsertionSort(head , 5);
	head = InsertionSort(head , 132);
	head = InsertionSort(head , 942);
	head = InsertionSort(head , 553);
	head = InsertionSort(head , 563);
	head = InsertionSort(head , 430);
	head = InsertionSort(head , 999);
	head = InsertionSort(head , 40);
	head = InsertionSort(head , 0);

	print_linked_list(head);
	MiddleOfSLL(head);
	return 0 ;
}