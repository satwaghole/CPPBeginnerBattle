#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	vector<int> A={6,2,5,6,9};
	int flag=0;
	
	 for (int i=0; i<A.size(); i++)
    {
    	int counter=1;
        int j;
        for (j=0; j<A.size(); j++)
        {
           if (A[i] == A[j] && (i!=j))
					 {
               	counter++;
						}
				}
        if (counter==1)
          flag++;
    }
    
    cout<<flag;
}
