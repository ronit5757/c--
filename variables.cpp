#include <iostream>
using namespace std;

int c=20; /*global value assigned to variable c*/

int main()
{
    int a , b , c;
    cout<<"enter value of a..."<<endl;
    cin>>a;
    cout<<endl;
    cout<<"enter value of b..."<<endl;
    cin>>b;
    cout<<endl;
    c = a + b;
    cout<<"the sum of a and b is ..."<<c<<endl;
    cout<<"the global value of c is..."<<::c;
    /*scope resolution operator is used*/
    cout<<endl;

    return 0;
}