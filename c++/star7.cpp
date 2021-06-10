#include<iostream>
using namespace std;
int main()

{
    int n,i,j,row,col;
    cin>>n;
for(int row=0;row<n;row++)
{
for(int col=0;col<n;col++)
{
      i=row;
      j=n-row-1;
    if(i<=j)
    {
        if(col>=i && col<=j)
        
            cout<<"*";
            else
            cout<<" ";
    }
    
        else
        {
            if(col>=j && col<=i)
            cout<<"*";
            else
            cout<<" ";

        }
    
}
cout<<endl;
}
cout<<endl;
return 0;
}



    