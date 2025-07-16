#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int N;long long sum=0;cin >> N; 
   for(int i=0;i<N;i++)
   {
      int A;cin>>A;
        sum=sum+A;
       
   }
   cout<<abs(sum)<<endl;
}