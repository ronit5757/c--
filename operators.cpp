#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout<<"enter value of a "<<endl;
    cin>>a;
    cout<<endl;
    cout<<"enter the value of b..."<<endl;
    cin>>b;
    cout<<endl;

    cout<<"following are aRITHMETIC OPERATORS";
    cout<<endl;
    cout<<"the addition value is = \n"<<a+b<<endl;
    cout<<"the subtraction m of a and b is = \n"<<a-b<<endl;
    cout<<"the multiplication of a and b is = \n"<<a*b<<endl;
    cout<<"the division of a and b is = \n"<<a/b<<endl;
    cout<<"the increment is = \n"<<a++<<endl;
    cout<<"the decrement is = \n"<<a--<<endl; /*first printed then decrement value stored*/
    cout<<"the vaqlue of --a is = \n"<<--a<<endl; 
    cout<<"the value of ++a is = \n"<< ++a<<endl; /*first increment then print*/
    cout<<endl;
    cout<<endl;
    /*compariosion operators gives 1 for true and 0 for false*/

    cout<<"FOLLOWING ARE COMPARISION OPERATORS"<<endl;

    cout<<"value of == is..."<<(a==b)<<endl;
     cout<<"value of <= is..."<<(a<=b)<<endl;
     cout<<"value of >= is..."<<(a>=b)<<endl;
     cout<<"value of != is..."<<(a!=b)<<endl;
     cout<<"value of < is..."<<(a<b)<<endl;
     cout<<"value of > is..."<<(a>b)<<endl;

    /*logical operators*/
    cout<<endl;
    cout<<endl;
    cout<<"FOLLOWING ARE LOGICAL OPERATORS"<<endl;
    cout<<"the value of and operatotor is..."<<((a==b) && (a>b))<<endl;
    /*gives true if both are true*/
    cout<<"the value of or operatior is..."<<((a==b) || (a>b))<<endl;
    /*gives true even if one is true*/
    cout<<"the value of not operator is.."<<(!(a>b))<<endl;
    /*gives opposite than correct answer*/
    return 0;
}