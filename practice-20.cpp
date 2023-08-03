//      *
//     ***
//    *****
//   *******
//  *********
//   pyramid

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"enter max value of rows\n";
    cin>>k;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=2*k-1;j++)
        {
            if((j>=k-i+1) & (j<=k+i-1)) 
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