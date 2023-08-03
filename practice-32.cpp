//*****
// *****
//  *****
//   *****
//    *****

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i && j<=i+4)
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