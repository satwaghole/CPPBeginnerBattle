#include <bits/stdc++.h>

using namespace std;

int swap(int *n1,int *n2)
{
	int *temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
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
	
	//bubble sort logic
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}	
		}
	}
	
	cout<<"\n sorted element in the array are:-";
	for(int i=0;i<n;i++)
	{
		cout<<"\t "<<arr[i];
	}
	
	return 0;
}
