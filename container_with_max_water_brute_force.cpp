#include<bits/stdc++.h>

using namespace std;

int max_water(vector<int> &vec)
{
	int area, maxArea =0;

	for(int i=0;i< vec.size(); ++i)
	{
		for(int j=i+1; j< vec.size(); ++j)
		{
			area = min(vec[i],vec[j]) * (j -i);
			maxArea = (maxArea < area) ? area : maxArea ;
		}
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