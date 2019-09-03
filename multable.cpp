//program to print multiplication table
#include<iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter the number"<<endl;
 cin>>n;
 int table;
 for(int i=1;i<=10;++i){
     table=n*i;
     cout<<table<<endl;
 }

}