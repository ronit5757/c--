#include<iostream>
#include<iomanip>
using namespace std;

class test 
{
    int a;
    int b;
    public:
    //test(int i, int j): a(i), b(j)  //here this is called initialization and it must be in order of declaration of variables a and b
    // test(int i, int j): a(i), b(i+j)
     //test(int i, int j): a(i), b(i*j)
     //test(int i, int j): a(i), b(a+j)
     test(int i, int j): b(j), a(b + i) //here order is not maintained so we will get garbage value for a  
    {
        cout<<"constructor is called "<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    } 
};

int main()
{
    test t1(2,3); 
    return 0;
}