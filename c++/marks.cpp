#include<iostream>
using namespace std;
int main()
{
    int marks=90;
    if(marks>=90)
    cout<<"You are eligible to go Goa";
    else if(marks>=80 )
    cout<<"You are going to Delhi";
    else if(marks>=70)
    cout<<"You are going to Telanagana";
    else if(marks>=60)
    cout<<"you are going to ooty";
    else
    {
        cout<<"You will be at home";
    }
}