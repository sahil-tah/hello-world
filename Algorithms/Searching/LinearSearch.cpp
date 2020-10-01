/*
Time Complexity - O(n)
Space Complexity -O(1)
*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int s){
	for (int i=0; i<n; i++){
		if(arr[i] == s)
			return i;
	}
	return -1;
}

int main(){
	int n, search;
	cout<<"Enter the size of the array: ";
	cin>>n;

	int arr[n];
	cout<<"Enter the elements of the array:\n";
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}

	cout<<"Enter the number to be searched in the array: ";
	cin>>search;

	int flag = linearSearch(arr, n, search);

	if (flag == -1)
		cout<<search<<" element not found"<<endl;
	else
		cout<<search<< " element found at postition "<<flag<<endl;

	return 0;
}
