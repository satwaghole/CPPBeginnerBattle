#include <bits/stdc++.h>

using namespace std;

/* prog to find maximum occuring character
*/

int main() {
	
	string str="asdasdddd";
	
	int freq[26];
	
	for(int i=0; i<26; i++)
		freq[i]=0;

 for(int i=0; i< str.length(); i++)
 {
		freq[str[i]-'a']++;
 }
	
int max = freq[0];
for(int i=0; i< 26; i++)
{
		if(max< freq[i])
			max = freq[i];
}
	cout<<"\n Max occured char is  = "<<max;
}
