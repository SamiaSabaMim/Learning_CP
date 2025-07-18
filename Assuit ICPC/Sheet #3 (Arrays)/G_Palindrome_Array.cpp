#include<iostream>
using namespace std;
int main ()
{
    int N;cin >> N;
    int A[N];
    for(int i =0;i<N;i++)
    {
        cin >>A[i];
    }
    bool ispalindrome = true;
    for(int i=0; i<N/2; i++)
    {
      if(A[i]!=A[N-1-i])
      {
        ispalindrome = false;
        break;
      }
    }
  if(ispalindrome)
  {
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
    } 
