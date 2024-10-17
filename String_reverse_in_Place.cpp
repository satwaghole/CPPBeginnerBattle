#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string string_reverse(string temp_str)
{
	int i=0;
	int j= temp_str.size()-1;
	
	while(i<j)
	{
		char temp = temp_str[i];
		temp_str[i] = temp_str[j];
		temp_str[j] = temp;
		
		i++;
		j--;
	}
	
//	cout<<"\n After reverse = "<<temp_str;
	return temp_str;
}

std::string divide_string(std::string temp)
{
	char tokenizer=' ';
	std::string word="";
	int i=0;
	
	while(temp[i] != '\0')  //i love my india
	{
		
		if(temp[i] != tokenizer)
		{
			//no space so far
			word += temp[i];
		}
		else
		{
			// space found
			//cout<<"\n word = "<<word;
			return word;
		}
		i++;
	}
	return word; // Return the last word if no space is found
}

/*
    i/p- I Love my India
    o/p- I evoL ym aidnI
  
*/
int main() {

	std::string s1="I Love my India";
	string output_string="";
	int i=0;
	
	cout<<s1;	
	std::string s2=s1;
	
	std::string token="";
	
	while(s1[i] != '\0')
	{
		token = divide_string(s1);
		
		
		output_string += string_reverse(token);
		
		if(output_string.size() == s2.size())
			break;
			
		output_string+=" ";

    
		s1 = s1.substr(token.size()+1,s1.size());
	    i++;
	}
	
    cout<<"\n"<<output_string;

    return 0;
}


