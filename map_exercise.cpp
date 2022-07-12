#include<bits/stdc++.h>

using namespace std;

int main()
{
	//normal map
	map<int, int> m1;
	map<int, int>::iterator it;
	
	m1.insert({1,10});
	m1.insert({2,20});
	m1.insert({3,30});
	m1.insert({2,300});
	
		cout<<"\n simple map = ";
	for(it=m1.begin(); it != m1.end(); ++it)
	{
			cout<<"\n "<< it->first <<" "<< it->second;
	}
	
	cout<<"\n *****************";
	//little complex map
	map<pair<int,string>, int> m2;
	map<pair<int,string>, int>::iterator it2;
	
	m2.insert({{4,"sam"}, 40});
	m2.insert({{5,"avi"}, 50});
	
		cout<<"\n little complex map = ";
	for(auto it=m2.begin(); it != m2.end(); ++it)
	{
		cout<<"\n "<< it->first.first <<"->"<< it->first.second<<" "<< it->second;
	}
	
	cout<<"\n *****************";
	//normal map
	multimap<int, int> m3;
	multimap<int, int>::iterator it3;
	
	m3.insert({1,10});
	m3.insert({2,20});
	m3.insert({3,30});
	m3.insert({2,300});
	
	cout<<"\n simple multi-map = ";
	for(it3=m3.begin(); it3 != m3.end(); ++it3)
	{
			cout<<"\n "<< it3->first <<" "<< it3->second;
	}
	
	//little complex multi-map
    cout<<"\n *****************";
	multimap<pair<int,string>, int> m4;

	
	m4.insert({{4,"sam"}, 40});
	m4.insert({{5,"avi"}, 50});
	
	cout<<"\n little complex multi-map = ";
	for(auto it=m4.begin(); it != m4.end(); ++it)
	{
		cout<<"\n "<< it->first.first <<"->"<< it->first.second<<" "<< it->second;
	}
	
	// simple unordered map
	cout<<"\n *****************";
	unordered_map<int,string> m5 = {{10, "abcd"}, {20, "sdfsd"},{30, "fgh"}};
	m5.insert({40," sfsd"});
	
	cout<<"\n simple unordered-map = ";
	for(auto it= m5.begin(); it != m5.end() ; ++it)
	{
		cout<<"\n "<< it->first <<" "<< it->second;
	}
	
	//little complex unordered-map
	cout<<"\n *****************";
	unordered_map<string, int> m6 = {{}};

	
	m6.insert({"sam", 40});
	m6.insert({"avi", 50});
	
	cout<<"\n little complex unordered-map = ";
	for(auto it=m6.begin(); it != m6.end(); ++it)
	{
		cout<<"\n "<< it->first <<"->"<< it->second;
	}
	
	
    //normal set
    cout<<"\n *****************";
	set<int> s1;
	set<int>::iterator it7;
	
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(300);
	s1.insert(20);
	
	cout<<"\n simple Set = ";
	for(it7=s1.begin(); it7 != s1.end(); ++it7)
	{
			cout<<"\n "<< *it7 ;
	}
	
	//little complex multi-set
    cout<<"\n *****************";
	multiset<pair<int,string>> s2;

	
	s2.insert({4,"sam"});
	s2.insert({5,"avi"});
	
	cout<<"\n little complex Multi-Set = ";
	for(auto it=s2.begin(); it != s2.end(); ++it)
	{
		cout<<"\n "<< it->first <<"->"<< it->second;
	}
	
	// unordered set
    cout<<"\n *****************";
	unordered_set<int> s3;

	
	s3.insert(40);
	s3.insert(50);
	s3.insert(10);
	
	cout<<"\n Unordered Set = ";
	for(auto it=s3.begin(); it != s3.end(); ++it)
	{
		cout<<"\n "<< *it;
	}
	
	cout<<"\n *****************";
	//stack 
	stack<string> st;
	st.push("sam");
	st.push("dgd");
	st.push("bdf");
	
	cout<<"\n stack elements:- ";
	while(!st.empty())
	{
		cout<<"\n "<<st.top();
		st.pop(); 
	}
	
	//queue
	cout<<"\n *****************";
	queue<int> que;
	que.push(10);
	que.push(20);
	que.push(60);
	
	cout<<"\n Queue elements:- ";
	while(!que.empty())
	{
		cout<<"\n "<<que.front();
		que.pop(); 
	}
	
}
