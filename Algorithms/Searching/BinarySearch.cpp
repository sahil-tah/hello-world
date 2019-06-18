/*
Time Complexity - O(log n) for worst and average case
		  O(1) for best case
*/
#include<iostream>
using namespace std;

int n,left,right,mid,i,s_ele;


int binary_search(int arr[],int left,int right,int s_ele)
{
	if(right >= left)
	{
		mid = left + (right-left)/2;
		
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
	cout<<"Enter the number of elements in array: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the elemnts of array:\n";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Elements of array are : ";
	for(i=0; i<n; i++)
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
