#include <bits/stdc++.h>
using namespace std;
// problem - https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
// i/p- "23,4,56"
/* O/p- 
23
4
56
*/

vector<int> parseInts(string str) {
	// Complete this function
	 //  stringstream ss(str) ;

    char *charPtr = strtok(const_cast<char*>(str.c_str()),",");
    vector<int> vInt;
    string word;
    while(charPtr!=NULL)
    {
        int num = stoi(charPtr);
        vInt.push_back(num);
        charPtr = strtok (NULL, ",");
    }
    return vInt;
	
    /*
     	stringstream s(str);
	vector <int> a;
	char ch;
	int t;

	while(s>>t)
	{
		a.push_back(t);
		s>>ch;
	}
	return a;
    */
}




int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}
