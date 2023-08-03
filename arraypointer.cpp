#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //address new = address current + i*sizeof datatype
    int marks[]= {72, 54, 65, 38, 84};
    int* p = marks;
   // cout<<"value at initial address = \n"<<*p<<endl;
   // cout<<"value at next address is = \n"<<*(p+1)<<endl;
   // cout<<"value at next address is = \n"<<*(p+2)<<endl;
   // cout<<"value at next address is = \n"<<*(p+3)<<endl;
   // cout<<"value at next address is = \n"<<*(p+4)<<endl;
    //or we can do by commenting the above code couts
    cout<<endl;
    cout<<endl;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    
    
    return 0; 
}