//*********
//**** ****
//***   ***
//**     **
//*       *
//**     **
//***   ***
//**** ****
//*********
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--; //k updates values of i and starts decrementing whole operation when k exceeds 5 whuch is done when i exceds 5
        for(j=1;j<=9;j++)
        {
            if(j<=6-k || j>=k+4)
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