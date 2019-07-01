/*
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