#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};

Node* head;

void insert(int x){
	Node* temp = head;
	Node* n = new Node();

	if(head!=NULL){
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = n;
		n->data	= x;
		n->next = head;
	}
	else{
		n->data = x;
		head = n;
		n->next = head;
	}
}

void remove(int x){
	Node* temp = head;
	Node* p;
	while(temp->data!=x){
		p = temp;
		temp = temp->next; 
	}
	p->next = temp->next;
	delete(temp);
}

void search(int x){
	Node* temp = head;
	int found = 0;
	while(temp->next != head){
		if(temp->data == x){
			cout<<"\nFound";
			found = 1;
			break;
		}
		temp = temp->next;
	}
	if(found==0){
		cout<<"\nNot Found";
	}
}

void show(){			
	Node* temp = head;
	cout<<"List is:\n";
	do{
		cout << temp->data << " ";
		temp = temp->next; 
	}while(temp!=head);
	cout << "\n";
}

int main(){
	int choice, x;
	do{
		cout<<"\n1. Insert";
		cout<<"\n2. Delete";
		cout<<"\n3. Search";
		cout<<"\n4. Print";
		cout<<"\nEnter your choice ";
		cin>>choice;

		switch(choice){
			case 1:
				cout<<"\nEnter the element to be inserted ";
				cin>>x;
				insert(x);
				break;

			case 2:
				cout<<"\nEnter the element to be removed ";
				cin>>x;
				remove(x);
				break;

			case 3:
				cout<<"\nEnter the element to be searched ";
				cin>>x;
				search(x);
				break;
			
			case 4:
				show();
				break;	
		}
	}while(choice!=0);

	return 0;
}