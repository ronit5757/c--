#include<iostream>
#include<iomanip>
using namespace std;
    class Y; //forward declaration
    class X
    {
        int data;
        public:
        int setdata(int num1)
        {
            data = num1;
        }
        friend void add(X ,Y);
    };

        class Y
    {
        int value;
        public:
        int setdata(int num2)
        {
            value = num2; 
        }
        friend void add(X ,Y);
    };

    void add(X o1, Y o2)
    {
        cout<<"addition is = "<<o1.data + o2.value;
    }
int main()
{
    X x;
    x.setdata(6);
    Y y;
    y.setdata(3);
    add(x,y);
    return 0; 
}