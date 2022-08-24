#include<bits/stdc++.h>

using namespace std;

/* Prog to convert binary number to decimal

i/p- 1100 o/p-12
i/p- 1010 o/p-10

*/

int PowerOfTwo(int num)
{
	int pow=1;
	if(num == 0)
		return 1;
	else
	{
		for(int i=1; i<=num; ++i)
		{
			pow = 2 * pow;
		}
	}
	return pow;
}

int main()
{
	int n,i=0, dec =0;
	cin>>n;

	while(n>0)
	{
		int rem = n %10;
		dec =  dec + (rem * PowerOfTwo(i));
		n=n/10;
		++i;
	}

	cout<<"\n"<<dec;
	return 0;
}
