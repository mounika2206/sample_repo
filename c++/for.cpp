#include<iostream>
using namespace std;
int main()
{
    int i,a[10],n;
    cout<<"Enter size";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }

}