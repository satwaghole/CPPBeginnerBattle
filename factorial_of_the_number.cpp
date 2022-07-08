#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return (n * fact(n-1));
}

int main()
{
	int n,rem,rev_number;
	cout<<"\n enter a number";
	cin>>n;
	
	//cout<<" Factorial of the given number is = "<<fact(n);
	int fac=1;
	for(int i=1;i<=n;i++)
	{
		 fac = fac * i;
	}
	cout<<" Factorial of the given number is = "<<fac;
	
}
