#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a , b = 1;
    a= 10;
    if(++a) // if(11) will be treated as true
    {
        cout<< b;
    }
    else
    {
        cout<< ++b;
    }
    return 0; 
}