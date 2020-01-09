#include <iostream>
#include <vector>
using namespace std;

template <class T>
class stack
{
	vector<T> v;
	
public:
		void push(T const &);
		void pop();
		void show();
	
};
template <class T>
void stack<T>::show()
{
//	for(auto i:v)
//		std::cout<<"\n"<<i;
	
	typename vector<T>::iterator it=v.begin();
	while(it!=v.end())
	{
		std::cout<<"\n"<<*it;
		it++;
	}
}

template<class T>
void stack<T>::push(T const &t1)
{
	v.push_back(t1);
}

template<class T>
void stack<T>::pop()
{
	if(v.empty())
	{
		cerr<<"\n No element to pop";
	}
	v.pop_back();
}
int main()
{
	//Int stack
	stack<int> IntStack;
	IntStack.push(10);
	IntStack.push(20);
	IntStack.push(30);
	IntStack.push(40);
	
	IntStack.show();
	
	IntStack.pop();
	std::cout<<"\n After pop()";
	IntStack.show();
	
	//string stack
	stack<string> StringStack;
	StringStack.push("ram");
	StringStack.push("sham");
	StringStack.push("Govind");
	StringStack.push("Radhey");
	
	StringStack.show();
	
	StringStack.pop();
	std::cout<<"\n After pop()";
	StringStack.show();

	return 0;

}
