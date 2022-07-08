#include<bits/stdc++.h>

using namespace std;

bool isPrime(int k)
{
	if(k == 0 || k==1 )
		return false;
	else if(k ==2)
		return true;
	else
	{
		for(int j=2;j<k/2;++j)
		{
			if(k%j == 0) 
				return false;			
		}
		return true;
	}
}


/* prog to print all prime number lesser than given number */
int main()
{
	int n,flag=0;
	cout<<"\n enter a number";
	cin>>n;	
	
/*	for(int i=2;i<n/2;++i)
	{
		if(n%i == 0) 
		{
			flag=1;	
			cout <<"\n i =  "<<i;
		}
	}
	
	if(flag==1)
		cout<<"\n Given number is NOT prime";
	else if(flag==0)
		cout<<"\n Given number is prime";
*/
	for(int i=0;i<=n;++i)
	{
		if(isPrime(i))
			cout<<"  "<<i;
	}
}
