#include<iostream>
#include<iomanip>
using namespace std; // 1 1 2 3 5 8 13 21 34 55 89 144..... fibonaccii series
                     // 1 2 3 4 5 6  7  8  9 10 11....
int fib(int n) 
{
    if(n<=2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1); //values at positions are declared
}

int main()
{
    int x;
    cout<<"enter position to find its value in fibonaccii \n ";
    cin>>x;
    cout<<"the value at position "<<x<<" is = \n"<<fib(x);
    return 0;
}  