#include <iostream>


using namespace std;


class sample{
	
	public:
			sample()
			{
			}
	
};

int main()
{
	//sample *s1;
	char *memory = new char[10*sizeof(sample)];  //allocating memory from particular location
	sample *s1= new(&memory[0]) sample();
	
	sample *s2= new(&memory[1]) sample();
	sample *s3= new(&memory[2]) sample();
	
	
	s1->~sample();   //have to call dtor explicitly
	s2->~sample();
	s3->~sample();
	
	delete[] memory;   //much needed
	
}
