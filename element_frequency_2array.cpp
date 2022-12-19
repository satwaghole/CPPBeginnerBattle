#include <bits/stdc++.h>
using namespace std;


vector<int> printFrequency(vector<int> &A, vector<int> &B)
 {
     map<int,int> map1;
     vector<int> answer;

    for(int i=0; i<A.size(); i++ )
     {
    //     if(map1.find(A[i])==map1.end())
    //     {
    //         map1[A[i]]=1;
    //     }
    //     else
    //     {
    //         map1[A[i]] = map1[A[i]]+1;
    //     }
        map1[A[i]]++;
    }
    for(int j=0; j< B.size(); j++)
    {
        // if((map1.find(B[j])==map1.end()))
        // {
        //  // cout<<map1[B[j]]<<" ";
				// 	answer.push_back(0);  //elemnt not present in the map so insert 0
        // }
        // else
        // {
        	answer.push_back(map1[B[j]]); // push elements frequency in the vector
        //	}
    }
    return answer;
}


int main()
{
	vector<int> A = {7, 6, 6, 3, 1, 5, 7};
	vector<int> B = {2, 1, 7, 5, 8};

	// Function call
	vector<int> C = printFrequency(A,B);
	
	for (auto ptr: C) {
        std::cout <<ptr<<" ";
    }
	
	return 0;
}
