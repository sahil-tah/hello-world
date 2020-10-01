/*
BinarySearch:-

Search a sorted array by repeatedly dividing the search interval in half. 
Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. 
Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.


Time Complexity - O(log n) for worst and average case
		  O(1) for best case
*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int left,int right,int s_ele)
{
	if(right >= left)
	{
		int mid = left + (right-left)/2;
		
		if(arr[mid] == s_ele )
			return mid;
		
		else if(arr[mid] > s_ele)
			return binary_search(arr,left,mid-1,s_ele);
		
		else
			return binary_search(arr,mid+1,right,s_ele);
	}
	
	else
		return -1;	
}

int main()
{
	int n,s_ele;

	cout<<"Enter the number of elements in array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elemnts of array:\n";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Elements of array are : ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<"Enter the element to search: ";
	cin>>s_ele;

	 
	int flag = binary_search(arr,0,n-1,s_ele);
	if( flag == -1)
		cout<<s_ele<<" not found"<<endl;
	
	else
		cout<<s_ele<<" found at position "<<flag<<endl;
	
}
