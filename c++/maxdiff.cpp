#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[10],val,max=-1000000;
	cin>>n;
	
	for(i=0;i<n;i++)
	{ 
	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	
	{
		for(j=i+1;j<n;j++)
		{
			val=a[j]-a[i];
		
	
	           if(val>max)
               	{
	              	max=val;
              	}}}cout<<max;
				  }
        

