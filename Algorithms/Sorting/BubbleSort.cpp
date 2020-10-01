/*
definition of Bubble sort
Bubble Sort:-
Bubble sort is the simplest technique in which we compare every element with its adjacent element and swap the elements if they are not in order. 
This way at the end of every iteration (called a pass), the heaviest element gets bubbled up at the end of the list.

Time Complexity - O(n^2)
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n){
	for(int i=0; i<n; i++)

		for (int j=0; j<n-1; j++)

			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

int main(){
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;

	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];

	bubbleSort(arr, n);

	printArray(arr, n);
}
