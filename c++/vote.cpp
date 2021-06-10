#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18)
    cout<<"You are not eligible";
    else if(age==18)
    cout<<"you are eligible";
    else
    cout<<"you are older so eligible";
}