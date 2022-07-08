#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,rem,rev_number;
	cout<<"\n enter a number";
	cin>>n;	
	
	while(n>0)
	{
		rem = n % 10;
		n = n/10;		
		rev_number = rev_number * 10 + rem;
	}	
	cout<<"\n Reverse of the number is = "<<rev_number;
}
