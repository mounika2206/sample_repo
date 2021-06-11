#include<bits/stdc++.h>
using namespace std;
string intToString(int n)
{
    string res="";
    while(n>0)
    {
        res.push_back('0'+n%10);
        n=n/10;
    }
    reverse(res.begin(),res.end());
    return res;
}


int main()
{int n;
cin>>n;
cout<<intToString(n);

}