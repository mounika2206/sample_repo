#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int row=1;row<=n;row++)
	{
		for(int space=1;space<=n-row;space++)
		{
			cout<< " ";
		}
		for(int star=row;star<=n*row-1;star++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
