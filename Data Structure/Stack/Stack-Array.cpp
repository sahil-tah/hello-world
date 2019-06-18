#include <iostream>
using namespace std;

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;		//-1 means empty stack

void push(int x){
	if (top == MAX_SIZE-1){
		cout<<"Error: Stack overflow.\n";
		return;
	}
	A[++top] = x;
}

void pop(){
	if(top==-1){
		cout<<"Error: No elemet to pop.\n";
		return;
	}
	top--;
}

int Top(){
	return A[top];
}

void print(){
	cout<<"Stack: ";
	for(int i=0; i<=top; i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	push(2); print();
	push(5); print();
	push(10); print();
	pop(); print();
	push(12); print();
}