#include <bits/stdc++.h>

using namespace std;

const int N=1e7+10;
int hsh[N];

int main()
{
	
	vector<int> A={5, 8, 15, 3, 20, 2};
	int flag=0;
	
    int max= *max_element(A.begin(), A.end());

    for(int k=0;k<N; ++k)
    {
        hsh[k]=0;
    }
    
     for(int i=0; i<A.size(); i++)
    {
        hsh[A[i]]++;
    }
    for (int j=0; j<=max; j++)
    {
       if(hsh[j] == 1)
            flag++;
    }
    return flag;
}
