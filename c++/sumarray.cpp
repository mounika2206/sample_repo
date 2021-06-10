#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n,a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The sum="<<sum;
}
