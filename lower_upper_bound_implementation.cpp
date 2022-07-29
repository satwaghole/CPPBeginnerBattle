#include <bits/stdc++.h>

using namespace std;

/*  lower bound implementation - with binary search logic

i/p:

LB- if element is present in the vector, it will return index of that element
		if element is not present in the vector but in the vector's range, it will
		return index of the element just greater that given element.
		if element is bigger than last element, it will return -1;
		
 UP- if element is present or not-present in the vector, it will always return
			next higher element.
			if element is bigger than last element, it will return -1;
		
i/p- 9
LB O/P- 9
LB O/P- 11

I/P 10
LB O/P- 11
LB O/P- 11

i/p 23
LB O/P- 23
LB O/P- 35

i/p 38
LB O/P- -1
LB O/P- -1

*/

int lowerBound(vector<int> &v, int element)
{
	int lo=0, high, mid=0;
	high = v.size() -1;
	
	while(high - lo > 1)
	{
			mid = (lo + high)/2;
			
			if(v[mid] < element)
			{
					lo = mid+1;
			}
			else  // keeping >= part in search space
			{
				 high = mid;
			}
	}
	if(v[lo] >= element)
		return lo;
	if(v[high] >= element)
		return high;
	
	return -1;
}


int upperBound(vector<int> &v, int element)
{
	int lo=0, high, mid=0;
	high = v.size() -1;

	while(high - lo > 1)
	{
			mid = (lo + high)/2;

			if(v[mid] <= element)  // removed mid from search space
			{
					lo = mid+1;
			}
			else
			{
				 high = mid;
			}
	}
	if(v[lo] > element)
		return lo;
	if(v[high] > element)
		return high;

	return -1;
}


int main()
{
	int n;
	cin>>n;				// size of the vector-sorted
	
	vector<int> v(n);
	for(int i=0;i< n;++i)
	{
		cin>>v[i];				// elements in the vector
	}
	int element;        // element of which we are finding lower bound
	cin>>element;
	
	int lb= lowerBound(v,element);
	cout<<"\n Lower Bound of the given element is = "<<( lb != -1 ? v[lb] : -1);
	 /* if lb is not -1, then print lb or else print -1 */
	 
	int ub= upperBound(v,element);
	cout<<"\n Upper Bound of the given element is = "<<( ub != -1 ? v[ub] : -1);
	
}
