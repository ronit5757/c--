//LCM FINDING FOR TWO NUMBERS

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,x,r;
    cout<<"enter the greater number"<<endl;
    cin>>a;
    cout<<"enter the smaller number"<<endl;
    cin>>b;
    while(true)
    {
        x =a;
        r=a%b;
        if(r==0)
        {
            break;
        }
        a=a*2;
    }
    cout<<"LCM IS = "<<x<<endl;
    return 0;
}  