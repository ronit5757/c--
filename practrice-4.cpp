//SWAPPING WITHOUT USING THIRD VARIABLE!!!!

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a; int b; 
    cout<<"ENTER NUM 1 \n"<<endl;
    cin>>a;
    cout<<endl;
    cout<<"ENTER NUM 2 \n"<<endl;
    cin>>b;
    cout<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"THE SWAPPED VALUE OF a IS "<<a<<" AND b is "<<b;
    return 0;
} 