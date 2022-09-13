#include<bits/stdc++.h>

using namespace std;

/* Modified Bubble Sort- Given an array of the integer,
   return sorted array


  used flag swapped here, if array is already sorted(best case scenario), 
   so no exchange will be done and it will give O(n) time complexity.

i/p - 5
	  1 3 5 7 4

o/p- 1 3 4 5 7

*/
void swap(int &i, int &j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}

void bubbleSort(int arr[], int n)
{
	bool swapped;

	for(int i=0; i< n-1; ++i)
	{
		swapped = false;
		for(int j=0;j< n-i-1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped)
		break;
	}

	//printing sorted array
	for(int k=0;k<n;++k)
	{
		cout<<arr[k]<<" ";
	}
}

int main()
{
	#ifndef ONLINE_JUDGExl
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif

	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}

	bubbleSort(arr,n);
	return 0;
}
