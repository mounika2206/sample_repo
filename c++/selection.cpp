#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n;
    int a[10];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
}