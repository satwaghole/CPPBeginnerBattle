#include<bits/stdc++.h>

using namespace std;

/* Given an array of the integer, return the indices of the two numbers that
add up to the given target.

i/p - 1 3 7 9 2
	  11

o/p- 3 4

*/


vector<int> find_two_sum_equal(vector<int> &array,int target)
{
	unordered_map<int, int> map;
  vector<int> myVect;
  
  for(int i = 0; i < array.size(); i++)
	{
      int numToFind = target - array[i];
      
      if(map.find(numToFind) != map.end()) // 11-2(last element) = 9...so 9 is present in the map
																					 // so it adds it to the vector and return vect

 /* NOTE: map.find() - is a built-in function in C++ STL that returns an iterator or a constant
 											 iterator that refers to the position where the key is present in the map.
											If the key is not present in the map container, it returns an iterator or
											a constant iterator which refers to map.end()
*/

			{
          myVect.push_back(map.find(numToFind)->second);
          myVect.push_back(i);
          break;
      }
      
      map.insert(pair<int, int>(array[i], i));
      /* elemnts in the maps are:-
      {1 0,
			 3 1,
			 7 2,
			 9 3} */
      
  }
  return myVect;
 }


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;

    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);

        if (it != imap.end())
            return vector<int> {i, it->second};

        imap[nums[i]] = i;
    }
}


int main()
{
	#ifndef ONLINE_JUDGExl
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif


	int n, total, a;
	cin>>n;

	vector<int> myVect;

  for(int i=0 ; i<n ; i++)
  {
      cin>>a;
      myVect.push_back(a);
  }
	cin>>total;
	
	vector<int> answer = find_two_sum_equal(myVect,total);
	
	for(int i=0;i<answer.size();++i)
			cout<<answer.at(i)<<" ";

	return 0;
}