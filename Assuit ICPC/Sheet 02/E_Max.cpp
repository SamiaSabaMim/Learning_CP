#include<iostream>
using namespace std;
int main()
{
    int N; cin >> N;
    int a[N];
    for(int i=0; i<N; i++){
    cin >> a[i];
    }
    int max = 0;
    for(int i=0; i<N; i++){
    if(a[i] > max)
    {
        max = a[i];
    }
}
    cout<< max <<'\n';
}