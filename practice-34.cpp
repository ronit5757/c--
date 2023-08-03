//*           *
//* *       * *
//*  *     *  *
//*   *   *   *
//*    *      *
//*           *
//*           *
//*           *
//*           *

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    cout<<"\n";
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==1 || j==9 ||(j==i && i>=5 && i<=9 ) || (j==10-i && i>=5 && i<=9) )
            {
                cout<<"*"; 
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