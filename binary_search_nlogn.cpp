#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i=0;
	cout<<"\n Enter total number of the element in the array";
	cin>>n;
	
	int a[n];
	
	cout<<"\n Enter the element in the array one by one";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Enter the element to be serached";
	int key;
	cin>>key;
		
	while( i <= n)
	{
		int mid = (i + n)/2;
		if(a[mid]== key) 
		{
			cout<<"\n Element found at "<<mid+1<<" position";
			return 1;
		}
		else if( a[mid] < key)
			i = mid+1;
		else if ( a[mid] > key)
			n = mid-1;
	}	
	return 1;
}
