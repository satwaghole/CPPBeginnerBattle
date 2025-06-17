#include <iostream>

using namespace std;

/* input -arra[2,4,6,3,4,1,2,1,1,7 ]
          - 2 (how many times 2 is occurred/Frequency hash table) 
   output - 2
*/
int main()
{
	int arr[10]={2,4,6,3,4,1,2,1,1,7};
	int array_size=sizeof(arr)/sizeof(arr[0]);
	
	int hash[array_size+1]={0};
	
	
	//precomputation :: hash_array
	for(int i=0;i<array_size;i++)
	{
		hash[arr[i]]+=1;
	}
	
	cout<<"\n Printing element from frequency hash map::Values in hash table ::  ";
	for(int j=0;j<array_size+1;++j )
	{
		cout<<"\n index="<<j<<", value="<<hash[j];
	}
	
	return 0;
}
