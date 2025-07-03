#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    int ar[3];
    ar[0]=A;
    ar[1]=B;
    ar[2]=C;
    sort(ar,ar+3);
    cout<<ar[0]<<'\n';
    cout<<ar[1]<<'\n';
    cout<<ar[2]<<'\n';

    cout<<'\n';
    cout<<A<<'\n';
    cout<<B<<'\n';
    cout<<C<<'\n';

}