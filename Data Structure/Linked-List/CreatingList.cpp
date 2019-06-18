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

int main(){
	Node* head = NULL;
	cout<<"How many numbers?\n";
	int n, x;
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Enter the number to be entered:\n";
		cin>>x;
		insert(&head, x);
		print(head);	
	}
}
