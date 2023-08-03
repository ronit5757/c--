//*       *
// *     *
//  *   *
//   **
//   **
//  *   *
// *     *
//*       *

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
            if(j==i || j==10-i)
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