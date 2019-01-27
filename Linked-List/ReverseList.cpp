#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

//Node* head;

void insert(Node** p2h, int x){  	//Adding to the start of LL
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if (*p2h != NULL) temp->next = *p2h;
	*p2h = temp;	
}

void print(Node* head){			//Printing the list
	//Node* temp = head;
	cout<<"List is:\n";
	while(head!=NULL){
		cout << head->data << " ";
		head = head->next; 
	}
	cout << "\n";
}

Node* Reverse(Node* head){
    Node *current, * prev, *next;
    current = head;
    prev = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }    
    head = prev;
    return head;
}

int main(){
    Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    print(head);
    head = Reverse(head);
    print(head);
}