#include <iostream>
using namespace std;
int main()
{
    float X,Y;cin >> X >> Y;
    
    if(X > 0 and Y > 0)
    {
        cout << "Q1" <<'\n';
    }
    else if (X < 0 and Y > 0)
    {
        cout << "Q2" <<'\n';
    }
    else if (X < 0 and Y < 0)
    {
        cout << "Q3" << '\n';
    }
    else if(X > 0 and Y < 0)
    {
        cout << "Q4"<< '\n';
    }
    else if (X == 0 and Y == 0)
    {
        cout << "Origem" << '\n';
    }
    else if(Y == 0)
    {
        cout << "Eixo X" << '\n';
    }
    else if(X == 0)
    {
        cout << "Eixo Y" <<'\n';
    }
}