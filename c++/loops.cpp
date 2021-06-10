#include<iostream>
using namespace std;
namespace raveet
{
    int age=31;
}
namespace sumit
{
    int age=22;
}

namespace mounika
{
    int age=33;
}
using namespace mounika;
int main()
{
    std:cout<<raveet::age<<"\n";
    cout<<age<<"\n";
    return 0;
}