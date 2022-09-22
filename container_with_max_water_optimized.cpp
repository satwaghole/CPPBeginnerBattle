#include<bits/stdc++.h>

using namespace std;

/* optimized with only one for loop by using two pointer approch
	
	first pointer is pointing to 1st element, 2nd pointer to last element
	we will check for bigger element between(a,b), 
	if b is bigger - we will do a++ or else
	   a is bigger - we will do b-- 

	so basically finding two elements with minimum gap AND
	largest distance so starting from first and last end of the array
*/

int max_water(vector<int> & vec)
{
	int area, maxArea =0;

	for(int i=0, j= vec.size() -1 ;i< vec.size() -1 && j+1 ;)
	{
		area = min(vec[i],vec[j]) * (j -i);
		maxArea = (maxArea < area) ? area : maxArea ;

		vec[i] < vec[j] ? ++i : --j;
	}

	return maxArea;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif

	int vecSize, temp;
	cin>>vecSize;

	vector<int> myVec;

	for(int i=0; i< vecSize; ++i)
	{	
		cin>>temp;
		myVec.push_back(temp);
	}

	cout<<max_water(myVec);

	return 0;
}