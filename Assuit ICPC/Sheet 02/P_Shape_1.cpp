#include<iostream>
using namespace std;
int main()
{
    int N; cin >> N;
    for(int i=N;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<'*';
        }
        cout << '\n';
    }
}