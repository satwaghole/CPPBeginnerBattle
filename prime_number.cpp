#include<bits/stdc++.h>

using namespace std;


Brute Force approach 1:-
------------------------
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

// Approach -2
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

// Approach-3 - TC(srt-n) sqr root of n

#include<bits/stdc++.h>

using namespace std;

// Prog to check given number is prime or not
/*
	 input- 5
	 output - yes
	 
	 input-9
	 output- no
	 
	 input - 17
	 output -yes
	 
	 All prime numbers greater than 3 can be written in the form 6k ± 1.

	This is because:
	All integers can be represented as: 6k, 6k+1, 6k+2, 6k+3, 6k+4, 6k+5
	Among these:
	6k ? divisible by 6
	6k+2 and 6k+4 ? divisible by 2
	6k+3 ? divisible by 3
	So only 6k+1 and 6k+5 (i.e., 6k-1) could be prime.
	
	
	
	
	Step-by-Step Example: n = 29
	Let's say you're checking if 29 is prime.
	
	You already handled:
	
	2 and 3 directly: n % 2 == 0 or n % 3 == 0
	
	Now we enter the loop:
	
	
	for (int i = 5; i * i <= 29; i += 6)
	First iteration: i = 5, check 29 % 5 and 29 % 7
	
	Next: i = 11, check 29 % 11 and 29 % 13
	
	This means:
	
	Check if 29 is divisible by 5, 7, 11, 13... which are all 6k - 1 or 6k + 1
	
	Thats the reason below if check
	if( (n%i) ==0  || (n% (i+2))==0)
	
	If n is divisible by any of them → it's not prime
	If n is not divisible by any → it's prime
	
	 
*/

bool isPrime(int n)
{
	if(n<=1)             // if number is 1 or less than one
		return false;
	if(n==2 || n==3)    // if number is 2 or 3
		return true;
	if((n%2==0) || (n%3==0))  // if number is divisible by 2 or 3
		return false;
	else
	{
		for(int i=5; i*i<=n; i+=6)
		{
			if( (n%i) ==0  || (n% (i+2))==0)  // when i(5) = 6k-1 => so n%i and 6k+1 => i+2 so n% (i+2)
			{
				return false;
			}
		}
	}
	
	return true;
}

int main()
{
	int num;
	cout<<"\n Enter a number to check prime or not";
	cin>>num;


	if(isPrime(num))
		cout<<"\n Prime number";
	else
		cout<<"\n Not a Prime number";
	return 0;
	
}

