#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j= 1; j<=5; j++)
        {
            if(j<=i)
            {
                cout<<j;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}  