#include<bits/stdc++.h>


using namespace std;
/*
input:-
| -1 | 2 | 4| -3| 5| 2| -5 | 2| 
  0    1   2   3  4  5   6   7

O/p:- | 2 | 4| -3| 5| 2| => 10

*/

int max(int best1, int sum1)
{
	return (best1> sum1)? best1: sum1; 
}
int main()
{
	int a,b,sum=0,n,k,arr[10],best=0;
	
	cout<<"\n Enter total number of the element in the array";
	cin>>n;
	
	cout<<"\n Enter the element in the array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int a=0; a<n;a++)
	{
		sum = max(arr[a], sum+arr[a]);
		best = max(sum,best);		
	}
	
	cout<<" best is ="<<best;
	
	return 0;
}
