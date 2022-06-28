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
	
	//Selection sort logic
	for(int i=0;i<n-2;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]< arr[min])
				min=j;
		}
		swap(arr[i],arr[min]);		
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
