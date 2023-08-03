#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cout<<"enter number to check it is odd or even \n"<<endl;
    cin>>x;
    if((x %2) ==0)
    {
        cout<<"THE NUMBER "<<x<<" is = even"<<endl;
    }
    else
    {
        cout<<"THE NUMBER "<<x<<" IS = ODD"<<endl;
    }
    return 0;
}