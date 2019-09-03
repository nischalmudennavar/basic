#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    temp=a;   //temp takes the value of  a
    a=b;        // and a takes the value of b

    b=temp; //b takes the valure of a;
    cout<<"a="<<a<<endl<<"b="<<b;
}
