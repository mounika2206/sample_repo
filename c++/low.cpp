#include<iostream>
using namespace std;
string convert(string s)
{
    for( int i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    return s;
}
int main()
{
    string s="MounIKa";
    cout<<convert(s);

}