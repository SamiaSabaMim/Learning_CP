#include<iostream>
using namespace std;
int main()
{
    char S;cin>>S;
    int N;cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<a[i];j++)
            {
                cout<<S;
         
            }
            cout<<'\n';
        }
    

}