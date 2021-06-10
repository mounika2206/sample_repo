#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[10],sum;
	cin>>n;
	cin>>sum;
	for(i=0;i<n;i++)
	{ 
	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				cout<<"("<<a[i]<<","<<a[j]<<")";
			}
		}
	}
}
