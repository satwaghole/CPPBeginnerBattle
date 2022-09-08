#include<bits/stdc++.h>

using namespace std;

/* Given an array of the integer, return the indices of the two numbers that add up to the given target.
i/p - 1 3 7 9 2
	  11

o/p- 3 4

*/

int finalArray[2];

int* solve()
{
	int arr[10], size, flag = 0,i, total;

	for(i=0;i<5;++i)
	{
		cin>>arr[i];
	}
	size = i+1;
	cin>>total;

	for(int j=0; j < size; ++j)
	{
		for(int k=j+1; k< size; ++k)
		{
			if( arr[j] + arr[k] == total)
			{
				flag = 1;
				finalArray[0] = j;
				finalArray[1] = k;
				break;
			}

		}
	}
	if(flag == 0)
	{
		finalArray[0] = 0;
	}

	return finalArray;
}

int main()
{
	#ifndef ONLINE_JUDGExl
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif

	int *answer = solve();

	cout<<"\n";
	for(int l=0; l< 2; ++l)
	{
		cout<<*(answer+l)<<"\t";
	}

	return 0;
}
