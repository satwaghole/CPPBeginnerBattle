#include <bits/stdc++.h>

using namespace std;


// time complexity is n2
int main()
{
	int n;
	cout<<"\n Enter total number of the element in the array";
	cin>>n;
	
	int arr[n];
	
	cout<<"\n Enter the element in the array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//Insertion sort logic
	for(int i=1;i<n;i++)
	{
		int value = arr[i];
		int hole = i;
		
		while( hole>0 && arr[hole-1]> value)
		{
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value;
	}
	
	cout<<"\n Sorted elements in the array are:-";
	cout<<"\n ************************************************************\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n *************************************************************";
	
	
	return 0;
}
