#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};

//Node* top = NULL;		//Using top instead of head for better understanding

void push(Node** head_ref, int x){
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	if(*head_ref != NULL) temp->next = *head_ref;
	*head_ref = temp;
}

void pop(Node** head_ref){
	Node* temp = *head_ref;
	if(*head_ref==NULL) return;
	//temp = *head_ref;
	*head_ref = temp->next;
	delete temp;
}

void print(Node* top){
	cout<<"Stack: ";
	while(top != NULL){
		cout<<top->data<<" ";
		top = top->next;
	}
	cout<<"\n";
}

int main(){
	Node* top = NULL;
	push(&top, 2); print(top);
	push(&top, 5); print(top);
	push(&top, 7); print(top);
	pop(&top); print(top);
}