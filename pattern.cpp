#include <bits/stdc++.h>

using namespace std;
/*
I/P:- 5
O/P-
*
**
***
****
*****

*/

int main()
{
	int n;
	cout<<"\n Enter the size";
	cin>>n;
	
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}	
	
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}	
}
