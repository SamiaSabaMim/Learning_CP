#include<iostream>
using namespace std;
int main ()
{
    int N; cin >> N;
    int y, m, d;
    y = N/365;
    N%=365;
    m = N/30;
    N%=30;
    d = N;
    cout << y << " " <<"years"<<'\n';
    cout<< m  << " " <<"months"<<'\n';
    cout << d  <<" " << "days"<<'\n';

}