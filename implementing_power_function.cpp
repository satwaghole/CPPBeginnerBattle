#include <iostream>
#include <vector>

using namespace std;


int getPower(int a,int b)
{
    int power =1;
    for(int i=1; i<= b; ++i)
    {
        power  = power * a;
    }
    return power;
}

int pow(int A, int B, int C) {

    int p = getPower(A,B);

    return p % C;
}


int main()
{
	int a = -1, b = 1, c=20;

	cout<<pow(a,b,c);

	return 0;
}
