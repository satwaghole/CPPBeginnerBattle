#include<bits/stdc++.h>

using namespace std;
/*
	Leetcode - rainwater trapping problem
	i/p - 11
		  0 1 0 2 1 0 3 1 0 1 2
    o/p- 8
    
    Current Water at P = Mi(maxLeft,maxRight) - CurrentHeight;
*/

int max_rainwater_trapped(vector<int> &height)
{
	int maxLeft, maxRight;
	int water_stored = 0 , final_water_stored=0;

	for(int i=0; i< height.size(); ++i)
	{
		maxLeft = 0, maxRight = 0;

		for(int j= i-1; j>=0; --j)
		{ 
			int mLeft = height[j];
			maxLeft = (mLeft > maxLeft) ? mLeft : maxLeft;
		}
		for(int k= i+1; k<height.size(); ++k)
		{
			int mRight = height[k];
			maxRight = (mRight > maxRight) ? mRight : maxRight;
		}

		water_stored = min(maxLeft, maxRight) - height[i];

		if(water_stored > 0)
			final_water_stored += water_stored ;
	}

	return final_water_stored;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif

	int total;
	cin>>total;

	vector<int> vec;

	for(int i=0; i< total; ++i)
	{
		int temp;
		cin>>temp;
		vec.push_back(temp);
	}

	cout<<max_rainwater_trapped(vec);

	return 0;
}
