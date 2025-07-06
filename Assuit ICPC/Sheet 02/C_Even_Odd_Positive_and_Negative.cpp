#include<iostream>
using namespace std;
int main()
{
    int N; cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    int Even=0,Odd=0,Positive=0,Negative=0;
    for(int i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            Even++;
        }
        else{
            Odd++;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(a[i]>0)
        {
            Positive++;
        }
        else if(a[i]<0)
        {
            Negative++;
        }
    }
    cout<<"Even: "<<Even<<'\n';
    cout<<"Odd: "<<Odd<<'\n';
   cout<<"Positive: "<<Positive<<'\n';
   cout<<"Negative: "<<Negative<<'\n';
    
    
        
}