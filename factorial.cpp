#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    unsigned long factorial=1;
    cout<<"enter the number !!!!!!! "<< endl; //got tired 😂
    cin>>n;
    int i=1;
    while(i<=n) // for(i=0;i<=n;++i) can also be used predecrement is used to hold the value of previous value
    {
        factorial=factorial*i;
        i++;
    }
    cout<<"factorial of"<<n<<"is"<<factorial<<endl;
}