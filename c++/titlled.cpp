#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i,count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	while(fact%10==0)
	{
		count++;
		fact/=10;
	}
	cout<<count;
}
