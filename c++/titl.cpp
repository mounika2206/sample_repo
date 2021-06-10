#include<iostream>
using namespace std;
int main()
{
	int n,zeros=0,divisior;
	cin>>n;
	divisior=5;
	while(n>=divisior)
	{
		zeros+=(n/divisior);
		divisior*=5;
	}
	cout<<zeros;
}

