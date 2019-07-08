#include <iostream>
using namespace std;

void printActivities(int s[], int f[], int n)
{
	int i=0,j;

	cout<<"Following activities are selected: ";
	cout<<i<<" ";

	for (j=1; j<n; j++)
	{
		if(s[j]>=f[i])
		{
			cout<<j<<" ";
			i = j;
		}
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;

	int s[n], f[n];

	cout<<"Enter start and end time of an activity(space seperated)"<<endl;
	for (int i=0; i<n; i++)
		cin>>s[i]>>f[i];

	printActivities(s, f, n);
}