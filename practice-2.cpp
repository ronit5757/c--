#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    for(x=200; x>=2; x-=2)
    {
        cout<<x<<setw(6);
    }
    return 0;
} 