#include<iostream>
#include<iomanip>
using namespace std;

// reccursion means a function calls itself again and again unless given condition is reached

int factorial(int n)
{
    if((n<=0) && (n<1))
    {
        return 1;
    }
    cout<<n<<" x"<<setw(2)<<factorial(n-1)<<endl;
    return (n * factorial(n-1));
}

int main()
{
    int number;
    cout<<"enter number u want factorial of!! \n"<<endl;
    cin>>number;
    cout<<"the factorial of "<<number<<" is "<<number<<"!  =  "<<factorial(number)<<endl; 
    return 0;
}