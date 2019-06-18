#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

//Node* head;

int Insert(Node** head, int data, int n){
    Node* temp1 = new Node();   //Node to be Inserted.
    temp1->data = data;
    temp1->next = NULL;
    if (n==1){
        temp1->next = *head;
        *head = temp1;
        return 0;
    }
    Node* temp2 = *head;         //n-1th node
    for (int i=0; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

int print(Node* temp){
    //Node* temp = head;
    cout<<"List is: \n";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main(){
    Node* head = NULL;
    Insert(&head, 2, 1);
    Insert(&head, 3, 2);
    Insert(&head, 4, 1);
    Insert(&head, 5, 2);
    print(head);
}