#include  <iostream>
using namespace std;
int multiply(int&);
int multiply(int &a)
{
    a=5*a;
    cout<<" a is"<<a<<"\n";
    return a;
}
int main()
{
    int x=10;
    cout<<x<<"\n";
    cout<<multiply(x)<<"\n";
    cout<<x<<"\n";
}

