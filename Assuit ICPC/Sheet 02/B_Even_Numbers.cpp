#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    for(int i=1;i<=N;i++)
    {
      if(i%2==0)
      {
        cout << i <<'\n';
      }
    }
    if(N<2)
    {
        cout<< -1 <<'\n';
    }
}