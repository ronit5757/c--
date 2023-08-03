#include<iostream>
#include<iomanip>
using namespace std;
//int r = ronit;
//int * chaneti = &r;
//here chaneti is pointer and stores address of r;
// while *chaneti is the derefrence operator for chaneti pointer which again gives value ronit for r; 
int main()
{
    int a;
    cout<<"enter number to find its address \n"<<endl;
    cin>>a;
    int* b= &a; //b is a pointer variable storing address of a
    // & is a (address of) reference operator
    // * is a (value at) derference operator use to give value
    cout<<"the address of a stored in b is \n"<<b<<endl;
    cout<<"the the value of b stored in address is \n"<< *b<<endl;
    //,,,,,,,for pointer to pointer,,,,,,,
    int**c = &b;
    cout<<"the addrress of c pointer is \n"<<c<<endl;
    cout<<"the value at address of c is \n"<<**c<<endl;
    return 0;
}