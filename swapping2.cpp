#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the numbers to be swapped "<<endl;
    cin>>a>>b;
    a=a+b; // adding a to b , a value is updated 
    b=a-b; //b takes the value of updated a - the original b 
    a=a-b; // a takes the value of b ...
    cout<<"after the swapping thing"<<endl;
    cout<<a<<b;

}