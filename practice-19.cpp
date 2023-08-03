//     *
//    **
//   ***
//  ****
// *****

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
       int i,j,k;
       cout<<"enter maximum value ";
       cin>>k;
       for(i=1;i<=k;i++)
       {
        for(j=1;j<=k;j++)
        {
            if(j>=k-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" "; //space is added
            }
        }
        cout<<"\n";
       }
       
    return 0;
}  