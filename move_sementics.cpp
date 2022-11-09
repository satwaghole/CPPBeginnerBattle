#include <iostream>
#include <vector>

using namespace std;

class A{

		public:
			
			int mLength;
			int *mData;
			
			//single argument ctor
			A(int len): mLength(len), mData(new int[len])
			{
				cout<<"\n single argument Ctor";
				cout<<"\n Length = "<<mLength;
				cout<<"\n Data = "<<*mData;
			}
			
			//copy ctor
			A(const A & obj): mLength(obj.mLength), mData(new int[obj.mLength])
			{
				cout<<"\n copy Ctor";
				std::copy(mData, mData+mLength, mData);
			}
			
			//assignemnt operator
			A & operator =(const A &obj) // no initialization list
			{
				cout<<"\n copy assignement operator";
				if( this != &obj)
				{
					 delete []mData;
					 
					 mLength = obj.mLength;
					 mData = new int[obj.mLength];
					 
					 std::copy(mData, mData+mLength, mData);
				}
				return *this;
			}
			
			A(A &&obj): mLength(0), mData(NULL)  //don't put const obj otherwise we cannot set it below
			{
				cout<<"\n move constructor";
				mLength = obj.mLength;
				mData =  obj.mData;
				
				obj.mLength = 0;
				obj.mData = NULL;
			}
			
			A & operator=(A && obj)
			{
				 cout<<"\n move assignement operator";
				 if(this != &obj)
				 {
						delete []mData;
						
						mLength = obj.mLength;
						mData = obj.mData;
						
						obj.mLength = 0;
						obj.mData = NULL;
				 }
				 return *this;
			}
			
			int getLength()
			{
				return mLength;
			}
};

int main()
{
	
		vector<A> myVect;
		
		myVect.push_back(A(10));
		cout<<"\n =================";
		myVect.push_back(A(20));
		cout<<"\n =================";
		
		A a(30);
		myVect.push_back(a);
		cout<<"\n =================";
		
		
		myVect.push_back(std::move(a));
		
		return 0;
}
