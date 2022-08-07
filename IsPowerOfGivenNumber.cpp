#include <bits/stdc++.h>

using namespace std;

/* 2^0 = 1 , (2*0)
	 2^1 = 2   (2*1)
	 2^2 = 4   (2*2)
	 2^3 = 8   (2*2*2)
	 2^4 = 16
	 .
	 .
 logic here is divide by 2 to the number till it becomes 1
 ...and check its reminder */
 
string isPowerOfTwo(int number)
{
	int reminder;
	while(number > 1)
	{
		reminder = number %2;
			if(reminder)
				break;
		number = number/2;
	}
	if(reminder)
		return "NO";
	else
		return "YES";
}

string isPowerOfThree(int number)
{
	int reminder;
	while(number > 1)
	{
		reminder = number %3;
			if(reminder)
				break;
		number = number/3;
	}
	if(reminder)
		return "NO";
	else
		return "YES";
}

int powerOfTwo(int k)
{
	int ans=1;
	for(int l=1; l<=k; ++l)
	 ans = 2* ans;
	 
	 return ans;
}

string isPowerOfTwo_simpleLogic(int num)
{
int flag = 0;
	cout<<" \n Simple way \n::";

	for(int i=1; i< num; ++i)
	{
		 if(powerOfTwo(i) == num)
			flag =1;
	}
	if(flag)
		return "YES";
	else
		return "NO";
}

int powerOfSeven(int k)
{
	int ans =1;
	for(int i=1;i<=k; ++i)
		ans = 7 * ans;

	return ans;
}

string isPowerOfSeven_simpleLogic(int num)
{
	int flag = 0;
	cout<<" \n Simple way \n::";

	for(int i=1; i< num/2; ++i)
	{
		 if( powerOfSeven(i) == num)
			flag =1;
	}
	if(flag)
		return "YES";
	else
		return "NO";
}


int main()
{
	int num;
	cout<<"\n Enter a number you want to check for Power of two";
	cin>>num;
	
	cout<<"\n Given number "<<num<<" = "<<isPowerOfTwo(num);
	cout<<"\n Given number "<<num<<" = "<<isPowerOfTwo_simpleLogic(num);
	
	cout<<"\n Enter a number you want to check for Power of three";
	cin>>num;
	cout<<"\n Given number "<<num<<" = "<<isPowerOfThree(num);
	
	cout<<"\n Enter a number you want to check for Power of Seven";
	cin>>num;
	cout<<"\n Given number "<<num<<" = "<<isPowerOfSeven_simpleLogic(num);
	
	
	return 0;
}
