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
		cout << curr->data << "   ";
		curr = curr->next;
	}
}
//  This function is to insert a node at the given Position in the Singly Linked list 
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

// Search  in the Singly Linked List
int SearchInSLL(Node * head , int n){
    Node * curr = head;
    int position = 1;
    while (curr != NULL){
        if (n == curr->data){
            return position;
        }
        curr = curr->next;
        position+=1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
	Node *head = new Node(10);
    // Insertion the Element 
	head = InsertAtGivenPosition(head , 1 , 30);
	head = InsertAtGivenPosition(head , 2 , 12);
	head = InsertAtGivenPosition(head , 2 , 42);
	head = InsertAtGivenPosition(head , 2 , 55);
	head = InsertAtGivenPosition(head , 5 , 563);
	head = InsertAtGivenPosition(head , 1 , 430);
    // Traversing the Linked List
	cout<<"Linked List is :  ";
	print_linked_list(head);
    // Searching In the Linked List
    cout<<"\nElement  is At  '" <<SearchInSLL(head , 10)<<"'  Position in the Linked List";
    cout<<"\nElement  is At  '" <<SearchInSLL(head , 42)<<"'  Position in the Linked List";
    cout<<"\nElement  is At  '" <<SearchInSLL(head , 100)<<"'  Position in the Linked List";
	return 0 ;
	
}