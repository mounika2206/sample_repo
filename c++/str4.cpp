#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string s="mounika";
    s.append("@" +to_string(a));
    cout<<s;

}