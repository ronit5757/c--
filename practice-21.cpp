//*******
// *****
//  ***
//   *
// REVERSE PYRAMID 

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            if((j>=i) && (j<=11-i))
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