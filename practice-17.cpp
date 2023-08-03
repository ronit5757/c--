// ******
// *****
// ****
// ***
// **
// *

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"max number of rows and columns \n";
    cin>>k;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
       {
         if(j<=k-i+1)
        {
            cout<<"*";
        }
        else 
        {
            cout<<"";
        }
       }
       cout<<"\n"; 
    }
    return 0;
} 