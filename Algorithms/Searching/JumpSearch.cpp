/*
Time Complexity - O(√n)
*/

#include <iostream>
#include <math.h>
using namespace std;

int jumpSearch(int arr[], int n, int x){
	int start = 0;
	int end = sqrt(n);

	while (arr[end] < x && end < x){
		start = end;
		end += sqrt(n);
		if(end > n-1)
			end = n;	//if right exceeds then bound 
	}

	for (int i=0; i<arr[end]; i++){
		if (arr[i] == x)
			return i;
	}
	return -1;
}

int main(){
	int n, search, flag;

	cout<<"Enter the size of an array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter the elements of the array:\n";
	for (int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"Enter the element to be searched: ";
	cin>>search;

	if((flag = jumpSearch(arr, n, search)) >= 0)
		cout<<search<<" found at position "<<flag<<endl;

	else 
		cout<<search<<" not found"<<endl;

	return 0;	
}