#include<iostream>

using namespace std;
string convert(string s)
{
	string res=s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	return s;
}
int main()
{
	string s="Mounika#";
	cout<<convert(s);
}
