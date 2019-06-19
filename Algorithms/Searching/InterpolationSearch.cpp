/*
Time Complexity - O (log log n)
*/

#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int x) { 
    int lo = 0, hi = (n - 1); 
  
    while (lo <= hi && x >= arr[lo] && x <= arr[hi]) { 
        
        if (lo == hi){ 
            if (arr[lo] == x) return lo; 
            return -1; 
        } 
        
        // Probing the position with keeping uniform distribution in mind.
        // (high - low) / arr[high] - arr[low]
		//  multiplying (x - arr[low])
		// adding low
 
        int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo])); 
        if (arr[pos] == x) 
            return pos; 
        
        if (arr[pos] < x) 
            lo = pos + 1; 
  
        else
            hi = pos - 1; 
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

	if((flag = interpolationSearch(arr, n, search)) >= 0)
		cout<<search<<" found at position "<<flag<<endl;

	else 
		cout<<search<<" not found"<<endl;

	return 0;	
}