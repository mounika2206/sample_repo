#include <iostream>
using namespace std;
int sum(int ,int);
int sum(int x,int y)
{
    return(x+y);
}
int main()
{
    int x=10,y=10;
    cout<<sum(x,y);
}
