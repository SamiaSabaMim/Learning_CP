#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    
    for(int t=0; t < T; t++)
    {
        int N;
        cin >> N;
   
    
    long long fact = 1;
    for(int i = 1; i <= N; i++)
    {
    
            fact = fact*i;
        }
    
      cout<< fact <<'\n';
    }
}