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

void swap(int *xp, int *yp){  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void selectionSort(int arr[], int n) {  
    for (int i = 0; i < n-1; i++)  
        
        for (int j = i+1; j < n; j++)  
            
            if (arr[j] < arr[i])  
                
                swap(&arr[j], &arr[i]);    
} 

int main(){
	int n;

	cout<<"Enter the size of an array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter the elements of the array:\n";
	for (int i=0; i<n; i++)
		cin>>arr[i];

    selectionSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);    

	return 0;	
}