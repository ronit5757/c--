//1 
//2 3
//4 5 6
//7 8 9 10 FLOYDS TRIANGLE!!

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j,n,k=1;
    cout<<"ENTER NUMBER OF ROWS "<<endl;
    cin>>n;
    for(i=1; i<=n ; i++)
    {
        for (j= 1; j<=n; j++)
        {
            if(j<=i)
            {
                cout<<k<<" ";
                k++;
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl; 
    }  
    return 0;
}