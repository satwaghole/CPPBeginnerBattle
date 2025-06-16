#include<bits/stdc++.h>

using namespace std;

/* Given an array of the integer, return the indices of the two numbers that add up to the given target.
i/p - 1 3 7 9 2
	  11

o/p- 3 4

*/
/******************************************************************************************
	Below approach is with TC O(n^2)
*******************************************************************************************/
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

/***************************************************************************
	TC - O(n)
***************************************************************************/

int main()
{
	std::vector<int> input_array={1,3,7,9,2};
	int sum=5;
	std::unordered_map<int, int> map; // TC of UM- O(1)
	
	for(int i=0;i<input_array.size();i++)
	{
		int second_number = sum- input_array[i];
		if(map.find(second_number) != map.end())   // element found in map
		{
			cout<<"pair = "<<second_number<<"\t"<<input_array[i];
			cout<<"\n";
			break;
		}
		map[input_array[i]]=i;  //element not found in map, then add entry in map
	}
	//cout<<"\n Number not found";

	cout<<"\n Elements in map are:\n";
	for(auto it=map.begin(); it!=map.end(); ++it)
	{
		cout<<"\n"<<it->first<<"\t"<<it->second<<"\n";
	}
}

/*
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
*/
