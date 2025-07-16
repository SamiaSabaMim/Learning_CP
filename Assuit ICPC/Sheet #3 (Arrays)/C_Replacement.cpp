#include<iostream>
using namespace std;
int main()
{
    int N; cin>> N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int j=0;j<N;j++)
    {
        if(A[j]>0)
        {
            cout<<1<<" ";
    
        }
        else if(A[j]<0)
        {
            cout<<2<<" ";
        }
        else{
            cout<<0<<" ";
        }
        
    }
    
}