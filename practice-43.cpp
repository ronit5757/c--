#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c='A';
    for(int i = 1; i<= 5 ; i++)
    {
        c = 'A';
        for(int j=1 ; j<= 5; j++)
        {
            if(j<=i)
            {
                cout<<c;
                c++;
            }
        }
        cout<<"\n";
    }
    return 0;
} 