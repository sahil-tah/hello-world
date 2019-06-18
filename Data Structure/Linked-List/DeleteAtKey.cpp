#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int x){
   Node* temp = new Node();
   temp->data = x;
   temp->next = NULL;
   if(*head_ref != NULL) temp->next = *head_ref; 
   *head_ref = temp;
}

void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data== key ){
        *head_ref = temp->next;
        delete(temp);
        return;
    }
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete(temp);
}

void printList(Node* node){
    while(node!=NULL){
        cout<< node->data <<" ";
        node = node->next;
    }
    cout<<"\n";
}

int main(){
    Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    cout<<"Created Linked list is:\n";
    printList(head);

    int key;
    cout<<"Enter the key to be deleted\n";
    cin>>key;
    deleteNode(&head, key);
    printList(head);
}