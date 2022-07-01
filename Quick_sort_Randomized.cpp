#include <bits/stdc++.h>
#include <iostream>
#include <random>
#include <tr1/random>

using namespace std;

void swap(int *n1,int *n2)
{
	int *temp;
	temp=n1;
	n1=n2;
	n2=temp;
}

int partition(int a[],int start,int end)
{
	int pivot = a[end];
	
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(start,end);
	
	int pIndex = distribution(generator); /* generally pIndex = start; but we implement 
											 randomized Quick sort , so this logic */
	for(int i=start; i<end; i++)
	{
		if(a[i] < pivot)
		{
			swap(a[i],a[pIndex]);
			pIndex = pIndex+1;
		}
	}
	swap(a[pIndex], a[end]);
	return pIndex;
}

void quickSort(int a[], int start, int end)
{
	int pIndex;
	if(start < end)
	{
		pIndex = partition(a,start,end);
		quickSort(a,start, pIndex-1);
		quickSort(a,pIndex+1, end);
	}
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
	
	quickSort(arr,0,n-1);
	
	cout<<"\n Sorted elements in the array are:-";
	cout<<"\n ************************************************************\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n *************************************************************";

	return 0;
}
