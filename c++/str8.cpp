#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p="mounika";
    reverse(p.begin(),p.end());
    cout<<p;
    cout<<"\n";
    string q="reddymounika";
    reverse(q.begin()+2,q.end());
    cout<<q;
cout<<"\n";
    string s="mounikaenugu";
    reverse(s.begin()+2,s.end()-1);
    cout<<s;
}