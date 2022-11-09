#include <iostream>
#include <memory>

using namespace std;

class A{
	public:
			void show()
			{
				cout<<" \n inside show";
			}
};

int main()
{
	std::unique_ptr<A> aPtr(new A());
	
	aPtr->show();
	cout<<"\n"<<aPtr.get();
	
	std::unique_ptr<A> bPtr(std::move(aPtr));
	bPtr->show();
	cout<<"\n "<<bPtr.get();
	cout<<"\n "<<aPtr.get();
	
	std::unique_ptr<A> cPtr= std::move(bPtr);
	cPtr->show();
	cout<<"\n aPtr "<<aPtr.get();
	cout<<"\n bPtr "<<bPtr.get();
	cout<<"\n cPtr "<<cPtr.get();
	
	return 0;
	
}
