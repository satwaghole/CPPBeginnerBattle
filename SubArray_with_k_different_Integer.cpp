#include <bits/stdc++.h>

using namespace std;

/*
	Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
Example 2:

Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
 

Constraints:

1 <= nums.length <= 2 * 104
1 <= nums[i], k <= nums.length

*/



class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k)
     {
       int n = nums.size();
        int count = 0;

        for (int left  = 0; left < n; ++left) 
        {
        unordered_set<int> mySet;


            for (int right = left; right < n; ++right) 
            {
                mySet.insert(nums[right]);

                if (mySet.size() > k) 
                    break; // No need to continue if we exceed k

                 if(mySet.size()==k)
                    count++;
            }
    }

    return count;
    }

};


int main() {
	
	Solution *s1;
	    vector<int> arr = {1,2,1,2,3};
    	int k = 2;
	
	cout<<s1->subarraysWithKDistinct(arr,k);

}