#include <bits/stdc++.h>
#include <bitset>

using namespace std;

int main()
{
	unsigned short int data =15;
	
	cout<<" Interger = "<<std::showbase<<std::dec<<data;
	cout<<"\n Hex = "<<std::showbase<<std::hex<<data;
	cout<<"\n Octal = "<<std::showbase<<std::oct<<data;
	cout<<"\n Binary = "<<std::showbase<<std::bitset<16>(data);
	
	return 0;
}
