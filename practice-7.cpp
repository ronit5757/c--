//LEAP YEAR CHECKING!!

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int y;
    cout<<"enter year to check leap year or not .. \n";
    cin>>y;

    if(y %4 == 0 )
    {
        cout<<y<<" is leap year !!";
    }
    else
    {
        cout<<"not a leap year";
    }
    
    return 0;
} 