#include<bits/stdc++.h>

using namespace std;

/* there is horizontal flower bed with N flowers.
There may be different flowers and each flower is represented by an integer.
Write a function to find the flower that is present more than N/3 time in the entire
 flower bed.

E.g- flower_bed ={1,2,2,3,2}
o/p {2}

flower_bed ={11,33,33,11,33,11}
o/p {11,33}

*/

vector<int> FlowerMoreThanNBy3Times(std::vector<int> flowers)
{
		int freq[100]={0};
		vector<int> ans;
		
		int n=flowers.size();
		
		for(int flower : flowers)
		{
			freq[flower]++;
		}
		
		for(int i=1; i< 100; ++i)
		{
			if(freq[i] > n/3)
			{
				ans.push_back(i);
			}
		}
	return ans;
}


int main()
{
	vector<int> flowers{11,33,33,11,33,11};
	
	vector<int> answer = FlowerMoreThanNBy3Times(flowers);
	
	for(int i: answer)
		cout<<i<<"\t ";
}


