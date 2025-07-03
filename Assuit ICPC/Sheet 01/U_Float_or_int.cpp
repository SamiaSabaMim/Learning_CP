#include<iostream>
using namespace std;
int main()
{
    double N;cin >> N;
    int  INT=N;
    double res=N-INT;
    if(res>0)
{
    cout <<"float "<<INT<< " "<<res<<'\n';
}
else{
    cout<<"int "<<N;
}
}

