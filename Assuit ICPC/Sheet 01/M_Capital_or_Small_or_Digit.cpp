#include<iostream>
using namespace std;
int main()
{
    char X;
    cin>>X;
   
    if(X>=48 && X<=57)
    {
        cout<<"IS DIGIT"<<'\n';
    }
    else if(X>='A' && X<='Z')
    {
        cout<<"ALPHA"<<'\n';
        cout<<"IS CAPITAL";
    }
    else if(X>='a' && X<='z')
    {
        cout<<"ALPHA"<<'\n';
        cout<<"IS SMALL";

    }
}