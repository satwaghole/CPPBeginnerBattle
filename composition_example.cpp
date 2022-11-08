#include <bits/stdc++.h>

using namespace std;

class x{
	
	public:
	int temp;
	
};

class y{
	
	public:
			x x1;  // created public object
	
};

int main()
{
	y y1;
	y1.x1.temp = 10;
	
	cout<< y1.x1.temp;
}
