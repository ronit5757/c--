#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i=30; //the initial condition of i is given in start only
    while(i>=0)
    {
        cout<<i<<setw(3);
        i--;
    }


    return 0;
}