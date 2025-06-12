/* Thsi sample code write custom size of function  with pointer arithmatic */

#include <iostream>

using namespace std;

template<typename T>
size_t template_my_size(T t)
{
	return (char*)(&t+1) - (char*)(&t);
}

size_t my_sizeof(int *p1)
{
	return (char*)(&p1+1)-(char*)(&p1);
}

int main()
{
    //std::cout<<"Hello";
    int x=10;
    int *ptr=&x;
    
    cout<<"\n Actual size of = "<<sizeof(ptr);
    
    cout<<"\n Custom size of = "<<my_sizeof(ptr);
    cout<<"\n Templatized Custom size of = "<<template_my_size(ptr);
   
}
