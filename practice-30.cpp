//******
//*    *
//*    *
//*    *
//*    *
//******

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    cout<<"\n";
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i==1 || i==6 || j==1 || j==6)
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