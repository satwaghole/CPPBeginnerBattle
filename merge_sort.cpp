#include <bits/stdc++.h>

using namespace std;

void merge_subArray(int *a, int low,int high,int mid)
{
	int i=low;
	int j=mid+1;
	int k=0;
	int temp[high-low+1];
	
	// Merge the two parts into temp[].
	while( i<= mid && j <=high)
	{
		if( a[i] < a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	// There are more elemnts in first array
	while(i <= mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	//There are more elemnts in second array
	while(j <= high)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	// finally copy all sorted data to the main array
	for(int i=low;i<=high;i++)                     //i less that equal to high is imp here=> equal to
	{
		a[i] = temp[i-low];                          // [i-low] is important here, only i will not work
	}
	
}

void mergeSort(int *a, int low, int high)
{
	int mid;
	mid=(low+high)/2;
	
	if(low < high)
	{
		mergeSort(a,low,mid);               //recursive call for 1st part
		mergeSort(a,mid+1,high);            //recursive call for 2nd part
		
		merge_subArray(a,low,high,mid);
	}
}

/* time complexity is nlogn and space complexity is theta(n)
  -  work on the method of devide and conquare strategy
  -  better than bubble, insertion and selection sort algo
  -  this is stable sorting algorithm
*/
 
int main()
{
	int n;
	cout<<"\n Enter total number of the element in the array";
	cin>>n;
	
	int a[n];
	
	cout<<"\n Enter the element in the array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	mergeSort(a,0,n-1);

	cout<<"\n Sorted elements in the array are:-";
	cout<<"\n ************************************************************\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<"\n *************************************************************";
		
	return 0;
}
