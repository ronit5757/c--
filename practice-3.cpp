#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x; int z; int a; int b;
    cout<<"enter numbers  to find its table"<<endl;
    cin>>x;
    cout<<"******************"<<endl;
    cin>>z;
    cout<<"******************"<<endl;
    cin>>a;
    cout<<endl;
    int y;
     cout<<"!!!!!THE TABLE FOR "<<x<<" IS !!!!! \n";
    for(y=0; y<=10; y++)
    {   
        cout<<x<<" X "<<y<<" = "<<x*y<<endl;
    }
    cout<<"!!!!!THE TABLE FOR "<<z<<" IS !!!!! \n";
    for(y=0; y<=10; y++)
    {   
        cout<<z<<" X "<<y<<" = "<<z*y<<endl;
    }
    cout<<"!!!!!THE TABLE FOR "<<a<<" IS !!!!! \n";
    for(y=0; y<=10; y++)
    {   
        cout<<a<<" X "<<y<<" = "<<a*y<<endl;
    }
    cout<<"/////THANKYOU/////";
    
    return 0;
} 