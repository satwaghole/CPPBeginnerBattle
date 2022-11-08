#include <bits/stdc++.h>
using namespace std;

template <class T>
class myStack{
	 vector<T> elements;

   public:

		void push_back(T const &e);
		void pop();
};

template<class T>
void myStack<T>::push_back(T const &e)
{
		elements.push_back(e);
}

template<class T>
void myStack<T>::pop()
{
	elements.pop_back();
}

int main()
{
	
	try{
			myStack<int> intStack;
			intStack.push_back(10);
			intStack.push_back(20);
			intStack.push_back(30);
			intStack.pop();
			
			myStack<string> stringStack;
			stringStack.push_back("sam");
			stringStack.push_back("ram");
			stringStack.push_back("sham");
			stringStack.pop();
	}
	catch(exception const &e)
	{
		cout<<"exception = "<<e.what();
		return -1;
	}
}
