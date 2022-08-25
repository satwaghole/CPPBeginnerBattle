#include<bits/stdc++.h>

using namespace std;

/* Prog to

1. Iterative way to print fibonacci number series less than given number
2. recursive way to find nth number in the fibonacci number series

*/

void fibonacci(int n)
{
	int prev =0, next =1 ,newone=0;
	
	cout<<"\n Output is :: "<<prev<<" "<<next<<" ";
	
	while((prev + next )< n)
	{
		 newone = prev + next;

		 prev = next;
		 next = newone;
		 
		 cout<<newone<<" ";
	}
	
}

int recursive_fibonacci(int n)
{
	if(n <= 1)
 		return n;
	else
		return (recursive_fibonacci(n-1) + recursive_fibonacci(n-2));
}

int main()
{
	int n;
	cin>>n;

	//fibonacci(n);                       // Iterative approach
	
	cout<<" "<<recursive_fibonacci(n);   //Recursive approach

	return 0;
}
