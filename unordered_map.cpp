#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.out","w",stdout);
	#endif


	unordered_map<string,int> myUOMap;

	//inserting into map with pair
	pair<string,int> myPair("sam", 10);
	myUOMap.insert(myPair);

	//inserting directly into map
	myUOMap["pam"] = 20;


	//finding from UO map - 2 ways to find key 
	cout<<myUOMap["pam"]<<"\n";
	cout<<myUOMap.at("sam")<<"\n";

	//cout<<myUOMap.at("abc")<<"\n";  //crashes with at() for key not present
	cout<<myUOMap["xyz"]<<"\n";       /* if key not present , [] returns 0 
										 it adds key xyz with value 0. */

	// safest way to search key in map
	if(myUOMap.count("xyz") > 0)
	{
		cout<<" xyz is present with key = "<<myUOMap.at("xyz");
	}

	//size of the map
	cout<<"\n size of the map is = "<<myUOMap.size();

	//erase key , value from map
	myUOMap.erase("xyz");
	// safest way to search key in map
	if(myUOMap.count("xyz") > 0)
		cout<<"\n xyz is present with key = "<<myUOMap.at("xyz");
	else
		cout<<"\n xyz is NOT present"; 

	//size of the map
	cout<<"\n size of the map is = "<<myUOMap.size();

	return 0;
}