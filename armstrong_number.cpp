#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,rem,res;
	cout<<"\n enter a number";
	cin>>n;	
	int orig_number = n;
	
	while(n>0)
	{
		rem = n % 10;
		n = n/10;		
		res = res + (rem * rem *rem);
	}	
	
	if(res == orig_number)
		cout<<"\n Number is armstrong";
	else
		cout<<"\n Number is NOT armstrong";
}
