#include<bits/stdc++.h>

using namespace std;

// Prog to convert decimal number to binary

int main()
{
	int n,i,a[10];
	cin>>n;
	
	for(i=0;n>0;++i)
	{
		int rem = n% 2;
		n =n/2;
		a[i]=rem;
	}
	
	for(i = i-1; i>= 0; i--)
		cout<<"\t"<<a[i];

		
	return 0;
}
