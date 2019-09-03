#include<iostream>
using namespace std;
int main(){
    int middleterm=1,previousterm=0,i,n;
    int nexterm=0;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {   
        cout<<" "<<nexterm;
        previousterm=middleterm;
        middleterm=nexterm;
        nexterm=middleterm+previousterm;
        
    }
}