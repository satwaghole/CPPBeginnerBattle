#include<bits/stdc++.h>
using namespace std;

/* Prog to check given set of parantheses are matching or not using stack
	i/p:- ((())) 
	o/p:- YES
	i/p:- (({})) 
	o/p:- YES
	i/p:- (({)
	o/p:- NO
*/
int main()
{
	int n;
	string str;
	cout<<"\n Enter parantheses string";
	cin>>str;

	stack<char> myStack;
	
	for(int i=0; (i<str.length()); ++i)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
			myStack.push(str[i]);
		else if(str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			char ch;
			if(!myStack.empty())
			{
				ch = myStack.top();
				myStack.pop();
			}
			if(( (str[i] == ')' && ch == '(' ) || (str[i] == ']' && ch == '[' ) || (str[i] == '}' && ch == '{' ))
				 && myStack.empty() && (i==(str.length()-1)))
					cout<<"\n Balanced";
			else if(i==(str.length()-1))
			{
				cout<<"\n Not Balanced";
				return 0;
			}
			ch='\r';
		}
 }
 if(!myStack.empty())
			cout<<"\n Not Balanced";

}
