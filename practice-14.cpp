//HCF OF TWO NUMBERS!!!

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, hcf, r;
    a>b;
    cout<<"enter number 1"<<endl;
    cin>>a;
    cout<<"enter number 2"<<endl;
    cin>>b;

    while (true)
    {
        hcf=b;
        r=a%b; 
        a= b; //values exchanged as b in place of r
        b=r;// values exchanged as r in place of b  (r new = b%r)

        if (r==0)
        {
            cout<<"HCF VALUE IS "<<hcf<<endl;
        }
        
    }
    return 0;
}  