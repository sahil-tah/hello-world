#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void insert(Node** ph, int x){
	Node* temp = new Node(x);
	if(*ph == NULL)
		*ph = temp;
	else{
		temp->next = *ph;
		*ph = temp;
	}
}

void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	Node* head = NULL;
	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);

	print(head);
	return 0;
}
