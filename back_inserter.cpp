#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	 int a[]= {1,2,3,4,5};
	
	const size_t size = sizeof(a) / sizeof(a[0]);
	
	vector<int> v1(a, a+size);
	
	vector<int> v2;
	
	std::copy(v1.begin(), v1.end(),back_inserter(v2));
	
	for(auto i:v2)
	cout<<" "<<i;
	
	return 0;
}
