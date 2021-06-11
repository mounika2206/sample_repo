#include<iostream>
using namespace std;
int main()
{
    int n,i,a[10],sum=0,avg=0;
    cout<<"enter no.of students";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
           sum=sum+a[i];
    }
  avg=sum/n;
    cout<<avg;
    return 0;
}