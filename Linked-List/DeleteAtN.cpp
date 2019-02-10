#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

Node* head;

void insert(int x){      //Insert at the end of the node
    Node* last = new Node();
    last->data = x;
    last->next = NULL;
    if(head==NULL){
        head = last;
    }
    else{
        Node* temp = new Node();
        temp = head;
        while(temp!=NULL){
            temp = temp->next;
        }    
        temp->next = last; // Appends the last node with last
    }
    
}

void print(Node* temp){
    //Node* temp = head;
    cout<<"List:\n";
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp=temp->next;
    }
}

void Delete(int n){     //Deleting from node n
    Node* temp1 = head;     //n-1th node
    if(n==1){
        head = temp1->next;
        delete(temp1); 
        return;
    }
    for(int i=0; i<n-2; i++){
        temp1=temp1->next;
    }
    Node* temp2 = temp1->next;  //nth node
    temp1->next = temp2->next;
    delete(temp2);
}

int main(){
    Node* head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5); //2, 4, 6, 5
    print(head);
    
    int n;
    cin>>n;
    
    Delete(n);
}