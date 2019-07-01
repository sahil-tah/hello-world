/*
Time Complexity - O(n*2)
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void insertionSort(int arr[], int n){
	int key, i, j;
	for(i=1; i<n; i++){
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;

	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];

	insertionSort(arr, n);

	printArray(arr, n);
}